import math

def main():
    #feladatEgy()
    #feladatKetto()
    #feladatHarom()
    #feladatNegy()
    #feladatOt()
    #feladatHat()
    #feladatHet()
    #feladatNyolc()
    #feladatKilenc()
    #feladatTiz()


def feladatEgy():
    mylist=[1,47,27,11,5,97,29,42]
    for i in mylist:
        db=0
        for j in range(1,i+1):
            if i%j==0:
                db+=1
        if db==2:
            print("True",end=" ")
        else:
            print("False", end=" ")

def feladatKetto():
    for i in range(63,500):
        if i%42==0 and i%63==0:
            print(i)

def feladatHarom():
    mylist=[0,5,7,3]
    for i in mylist:
        if i == 0:
            print(1, end=" ")
        else:
            fakt=1
            for j in range(1,i+1):
                fakt=fakt*j
            print(fakt, end=" ")

def feladatNegy():
    oszt=1
    szam=7
    maradek=0
    for i in range(7,5429,7):
        szam=szam+7
        if szam < 5429:
            oszt=oszt+1
        else:
            maradek=5429-(szam-7)

    print(oszt,maradek)

def feladatOt():
    temp=1
    for i in range(7):
        temp=temp+temp+temp
    print(temp)

def feladatHat():
    point=[3,-7]
    if point[0] >= 0 and point[1] >= 0:
        print("elso siknegyed")
    elif point[0] < 0 and point[1] >= 0:
        print("masodik siknegyed")
    elif  point[0] < 0 and point[1] < 0:
        print("harmadik siknegyed")
    else:
        print("negyedik siknegyed")

def feladatHet():
    points=[[3,7],[-1,-3],[-5,2],[3,-5]]
    for i in points:
        if i[0] >= 0 and i[1] >= 0:
            print("elso siknegyed")
        elif i[0] < 0 and i[1] >= 0:
            print("masodik siknegyed")
        elif  i[0] < 0 and i[1] < 0:
            print("harmadik siknegyed")
        else:
            print("negyedik siknegyed")

def feladatNyolc():
    a=3
    b=-4
    c=1
    x1=((-b) + math.sqrt((b*b)-(4*a*c)))/(2*a)
    x2=((-b)- math.sqrt(pow(b,2)-(4*a*c)))/(2*a)

    print(x1,x2)

def feladatKilenc():
    sum=0
    for i in range(2,15,2):
        sum=sum+i
    print(sum)

def feladatTiz():
    list1=[1,2,3,4,5,6,7,8,9]
    list2=[2,4,6,8,10,12,0,0]
    list3=[]
    for i in list1:
        if i in list2:
            list3.append(i)

    print(list3)
    
main()