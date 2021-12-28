p = 0
fa = 0
passed = []
failed = []
total=[]

def Check(u, k):
    # print("I am in chec")
    global p,fa
    passed = []
    failed = []
    with open(u, "r") as f:
        # print("I am in che")
        while True:
            # print("oooo")
            str = f.readline()
            if not str:
                break
            # print(str)
            l = str.split()
            # print(l)
            s = len(l) - 1
            # print(s)
            b = True
            for i in range(3, s):
                if (l[i] == "F"):
                    b = False
                    break

            if (b):
                passed.append(str)
                p += 1
                total.append(str)
            else:
                failed.append(str)
                fa += 1
    # if (p == 0):
    #     print(f"No students passed in {k}th Sem")
    # else:
    #     print(f"Number of Students Passed in {k}th sem are {p} and their details are")
    #     for item in passed:
    #         print(item)
    # if (fa == 0):
    #     print(f"No students failed in {k}th sem")
    # else:
    #     print(f"Number of Students Failed in {k}th sem are {fa} and their details are")
    #     for item1 in failed:
    #         print(item1)


Check("D:\\Mypython\\2019\\2019-GY-1st-Sem.txt", 1)
Check("D:\\Mypython\\2019\\2019-GY-2nd-Sem.txt", 2)

with open("D:\\Mypython\\2019\\2019-GY-2nd-Sem.txt, "r") as k:
    while True:
        str =k.readline()
        if not str:
            break
