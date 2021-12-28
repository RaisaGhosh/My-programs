
myfile_1=open("2019\\2019-GY-1st-Sem.txt",'r').read().split('\n')
myfile_2=open("2019\\2019-GY-2nd-Sem.txt",'r').read().split('\n')

mynewfile_pass=open("D:\\Mypython\\2019\\1st_Year\\1st_year_pass_Stats.txt",'w')
mynewfile_fail=open("D:\\Mypython\\2019\\1st_Year\\1st_year_fail_Stats.txt",'w')
totalpass=[]
totalfail=[]

def check(roll,grade1,grade2):
    # print(roll,'\t',grade1,'\t',grade2)

    if 'F' not in grade1[0] and 'F' not in grade2[0] and 'I' not in grade1[0] and 'I' not in grade2[0]:
        totalpass.append(roll)
        mynewfile_pass.write(roll)
        mynewfile_pass.write('\t')
        mynewfile_pass.write(str(grade1[0]))
        mynewfile_pass.write('\t')
        mynewfile_pass.write(str(grade2[0]))
        mynewfile_pass.write('\n')


    else:
        totalfail.append(roll)
        mynewfile_fail.write(roll)
        mynewfile_fail.write('\t')
        mynewfile_fail.write(str(grade1[0]))
        mynewfile_fail.write('\t')
        mynewfile_fail.write(str(grade2[0]))
        mynewfile_fail.write('\n')
        # print('FAIL')



col_1=len(myfile_1[1].split('\t'))
col_2=len(myfile_2[1].split('\t'))

mystudents=[]

for i in range(1,len(myfile_1)):
    mystudents.append(myfile_1[i].split('\t')[1])
for i in range(1,len(myfile_2)):
    mystudents.append(myfile_2[i].split('\t')[1])

mystudents=list(sorted((set(mystudents))))

print("Total Students ",len(mystudents))

mypapers_1=myfile_1[0].split('\t')[3:col_1-1]
mypapers_2=myfile_2[0].split('\t')[3:col_2-1]

print("Total Papers ",mypapers_1,'\t', len(mypapers_1))
print("Total Papers ",mypapers_2,'\t', len(mypapers_2))

for i in range(len(mystudents)):
    gd1=[]
    gd2=[]
    # print(i,'\t',mystudents[i])
    for j in range(len(myfile_1)):
        myrows=myfile_1[j].split('\t')
        if mystudents[i]==myrows[1]:
            gd1.append(myrows[3:col_1-1])

    for j in range(len(myfile_2)):
        myrows = myfile_2[j].split('\t')
        if mystudents[i] == myrows[1]:
            gd2.append(myrows[3:col_2 - 1])
    check(mystudents[i],gd1,gd2)



print("Total Pass in both semester",len(totalpass))
print("Total Fail in both semester",len(totalfail))




mynewfile_pass.close()
mynewfile_fail.close()











