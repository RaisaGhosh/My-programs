
def entry(u,x):
    lateral=0
    regular=0
    backlog=0
    a=open(u,'r').read().split('\n')
    # print(a)
    x=x-2000
    y=x+1
    z=x-1
    x=str(x)
    y=str(y)
    z=str(z)
    # print(type(x))
    for i in range(1,len(a)):
        # print("hi")
        if(a[i].startswith(x)):
            # print("bye")
            regular=regular+1
        if (a[i].startswith(y)):
            # print("by")
            lateral=lateral+1
        if(a[i].startswith(z)):
            # print("b")
            backlog=backlog+1
    
    print(f"Total number of Regular Students is: {regular}")
    print(f"Total number of Lateral Students is: {lateral}")
    print(f"Total number of Backlog Students is: {backlog}")

#The second parameter is the year of Entry
entry("2019\\2019-GY-8th-Sem.txt",2015)
