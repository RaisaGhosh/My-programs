def check(a,b):
    q=0
    for i  in range(0,len(a)):
        if a[i]==b[i]:
            q=q+1
    return q

A=input()
B=input()

l=[]
s=[]
cost=0

for i in range(0,len(A)-(len(B)-1)):
    l.append(A[i:i+len(B)])


for i in l:
    x=check(i,B)
    s.append(x)

y=s.index(max(s))
m=l[y]

for i in range(0,len(m)):
    if B[i]==m[i]:
        pass
    else:
        cost=cost+5

print(cost)
