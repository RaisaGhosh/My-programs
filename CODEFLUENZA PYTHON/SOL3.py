l=[]
def subString(l,r):
    ss=[]
    # x=int(len(l)/r)
    # print(len(l))
    for i in range(0,len(l),3):
        s=[]
        for j in range(i,i+3):
            s.append(l[i])
        ss.append(s)

    v=[]
    
    for i in range(0,len(ss)):
        v.append(cost(ss[i]))
    
    print(min(v)+1)
    # print(v.index(min(v)))
    # print(ss[v.index(min(v))])

def cost(l):
    x=[]
    y=[]
    for i in range(0,len(l)):
        if i%2==0:
            x.append(l[i])
        else:
            y.append(l[i])

    return(min(max(x),max(y)))

def getCombination(arr, n, r):
	data = [0]*r
	combination(arr, data, 0,
					n - 1, 0, r)

def combination(arr, data, start,end, index, r):
	if (index == r):
		for j in range(r):
			l.append(data[j])
		return

	i = start
	while(i <= end and end - i + 1 >= r - index):
		data[index] = arr[i]
		combination(arr, data, i + 1,
						end, index + 1, r)
		i += 1


i=input().split()
arr = input().split()
arr = [int(j) for j in arr]
arr.sort()
r = int(i[1])
n = int(i[0])
getCombination(arr, n, r)
# print(l)
subString(l,r)


