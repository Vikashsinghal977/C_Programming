// This is c++ program :)
#include <stdio.h>
#include <math.h>
int main(){
    int principal=100, rate=4, time=1; 
    int siminterest = (principal* rate* time)/100;
    printf("The * two number %d\n", (2)*(2)*(2)*(2)*(2));
    printf("The value of simpal interest %d", siminterest);
    printf("The prower value %f\n", pow(2, 5));
    return 0;
}  
print("======================================python==============================")
def main(): 
    a=25
    b=26    
    c=a=b
    print('''
a=25
b=26
c=a=b
What is tha value of C ?''')
    ans= int(input("Enter the answer only integer :"))
    while ans==c:
        print("Nice you enter a right answer :")
        break
    else:
        print(":( rong")
main()
ch=input("Enter n to stop a program :")
while ch!='n':
    main()
    ch=input("Enter n to stop a program :")
print("aap yha aye kiss liye")
input("Whats your msg :) :")
print("======================================python=============================")
# This a python program
a=int(input("Enter a number1 :"))
b=int(input("Enter a number2 :"))
ope=input("Enetr a operater +,-,/,* :")
print("======================================Calculate=========================")
if ope=="+":
     c=a+b
    print("your restult is ", c)
elif ope=="-":
    c=a-b
    print("your restult is ", c) 
elif ope=="*":
    c=a*b
    print("your restult is ", c)
elif ope=="/":
    c=a/b
    print("your restult is ", c)
else:
    print("you enter a another operater")
print("======================================Table===========================")
tab=int(input("Enter a table number :"))
for i in range(1,11):
    print(tab,"*",i,"=",tab*i)
print("thanks")
print("======================================")
# This a python program
def Calculater():
    a=int(input("Enter a number1 :"))
    b=int(input("Enter a number2 :"))
    ope=input("Enetr a operater +,-,/,* :")
    print("==================================Calculate======================")
    if ope=="+":
        c=a+b
        print("your restult is ", c)
    elif ope=="-":
        c=a-b
        print("your restult is ", c) 
    elif ope=="*":
        c=a*b
        print("your restult is ", c)
    elif ope=="/":
        c=a/b
        print("your restult is ", c)
    else:
        print("you enter a another operater")
def Table():
    print("================================Table===============================")
    tab=int(input("Enter a table number :"))
    for i in range(1,11):
        print(tab,"*",i,"=",tab*i)
    print("thanks")
def check():
    a='y'
    while  a=='y':
        a=input("Enter a y to start again :")
        if a=='y':
            continue
        break
    else:
        print('26' )
def star():
    a=0
    while a==0:
        x=rendom.rendint(0,1)
        print("x",end="")
print("""
====================================file name         =       number===============
                                    Calculater        =       01
                                    Table             =       02
                                    start             =       03""")
file=int(input("Enter a file number :"))
if file==1:
    Calculater()
elif file==2:
    Table()
elif file==3:
    star()
else:
    print(" ")
import random
print("Welcome to VARDH program")
pas=input("Enter a password:")
password="Singhal977"
if pas==password:
    print("WELCOME A LOVER GAME")
    number=random.randint(1,100)   /; 
    ctr=0
    while ctr<10:
        guess=int(input("guess a number in range 1..100:"))
        if guess==number:
            print("you win!! :)")
            cha=input("enter a single character :")
            n=5
            m=5
            for i i range (123, 265,85):
                for j in range(25,i,2):
                    if j!=i==2:
                        print("The Game is over flow ",j)
                    else:
                        password=typedef float MyCustomType;
            for i in range(1,n+1):
                for j in range(1,m+1):
                    if i==1 or j==3 or i==n:
                        print(cha,end="")
                         print(" ",end="")
                print()
            print()
            for i in range(6):
                for j in range (7):
                    if(i==0 and j%3!=0)or(i==1 and j%3==0)or(i-j==2)or(i+j==8):
                        print(cha,end='') 
                    else:
                        print(" ",end="")
                print()
            print()
            for i in range(1,6):
                for j in range(1,6): 
                    if j==1 or j==5 or i==5:
                        print(cha,end='')
                    else:
                        print(" ",end="")
                print()
            break
        else:
            ctr=ctr+1
    if not ctr<5:
        print("you lose :(")
        print("The number is",number)
else:                                             
    print("You are enter a rong password")
    print("restart again")
    a=input("enter a name:")
#include <stdio.h>
#include <math.h>
int main(){
    int r, n, t, d=0, sum=0;
    printf("Enter a number :");
    scanf("%d", &n);
    t=n;
    while (n>0){
        n=n/10;
        d=d+1;
    }
    //printf("sum of a digit  =%d",d);
    n=t;
    while (n>0){
        r=r%10;
        sum=sum+pow(r, d);
        n=n/10;

    }
    if (d==sum)
        printf("Armstrong");
    else
        printf("not armstrong");
    
}

 

####################### Second Part ######################

for i in range(1,6):
    for j in range(1,10):
        if j>=6-i and j<=4+i:
            print("#",end="")
        else:
            print(" ",end="")
    print()
print()

##########################################################
n=int(input("How much student :"))
a,b,c=[]
des={} 
for i in range (n):
    name=input("Enter a name of student :")
    for j in range(3):
        marks=int(input("Enter a marks of student :"))
        if i==1:
           mak=a.append(marks)
           des.append(name,a)
        elif i==2:
            mak=b.append(marks)
            des.append(name,b)
        else:
            c.append(marks)
            des.append(name,c)
    print()
print(des)
print(a)
print(b)
print(c)
    
###########################################################################


n=int(input("How much student :"))
lis=[]
marks=[]
score=[]
for i in range (n):
    name=input("Enter a name of student :")
    lis.append([])
    lis[i].append(name)
    for j in range(3):
        marks=int(input("Enter a marks of student :"))
        lis[i].append(marks)
        score+=[marks]

    print()
print(lis)
pasdf=len(lis)
print(pasdf)    
########################################################################