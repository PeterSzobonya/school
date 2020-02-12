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
    for i in range(1,501):
        if 500%i==0:
            print(i, end=" ")

def feladatKetto():
    db=0
    for i in range(1,501):
        if 500%i==0:
            db+=1
    print(db)

def feladatHarom():
    db=0
    for i in range(1,501):
        if 500%i==0:
            db+=1
    
    if db%2==0:
        print("paros")
    else:
        print("paratlan")

def feladatNegy():
    for i in range(3,50,3):
        print(i)

def feladatOt():
    sum=0
    for i in range(3,50,3):
        sum=sum+i
    print(sum)

def feladatHat():
    for i in range(6):
        print(i, 10-i)

def feladatHet():
    for i in range(5):
        for j in range(5):
            print('+',end="")
        print()

def feladatNyolc():
    for i in range(5):
        for j in range(5):
            if i==0 or i==4:
                print("-",end="")
            else:
                print("+", end="")
        print()

def  feladatKilenc():
    for i in range(5):
        for j in range(5):
            if i==0 or i==4:
                print("-",end="")
            elif j==0 or j==4:
                print("|",end="")
            else:
                print("+",end="")
        print()

def feladatTiz():
    for i in range(5):
        for j in range(5):
            if (i==0 or i==4) and (not(j==0) and not(j==4)):
                print('-',end="")
            elif (j==0 or j==4) and (not(i==0) and not(i==4)):
                print("|",end="")
            elif i>0 and i<4 and j>0 and j<4:
                print(" ", end="")
            else:
                print("+",end="")
        print()

main()