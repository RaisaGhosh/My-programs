
t=input()
for q in range(0,int(t)):
    a=input().split()

    A=a[0:3]
    B=a[3:]

    A = [int(i) for i in A]
    B= [int(i) for i in B]

    m1=max(A)
    m2=max(B)
    x=B.index(min(B))

    sum=int(m1/m2)

    for i in A:
        if i==m1:
            pass
        else:
            sum=sum+B[x]*i

    print(sum)