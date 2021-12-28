import collections
def grades(u):
    a=open(u,'r').read().split('\n')
    b=a[0].split("\t")
    #print(b)
    l=[]
    for i in range(3,len(b)-1):
        l=[]
        for j in range(1,len(a)):
            c=a[j].split("\t")
            #print(c)
            l.append(c[i])
        x=collections.Counter(l)
        print(f"FOR {b[i]} \n O= {x['O']}\t E= {x['E']}\t A= {x['A']}\t B= {x['B']}\t C= {x['C']}\t D= {x['D']}\t F= {x['F']}")


grades("2019\\2019-GY-1st-Sem.txt")

