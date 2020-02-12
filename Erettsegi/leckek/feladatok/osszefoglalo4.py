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
    feladatTiz()



def feladatEgy():
    print("\t",end="")
    for i in range(10):
        print("\t" , i+1, end="")

    print("\n", 90*"-")

    for i in range(1,11):
        print("\n",i, "\t|", end="")
        for j in range(1,11):
            print("\t",i*j,end="")

def feladatKetto():
    height = int(input("Adjon meg egy szamot: "))

    for i in range(height,0,-1):
        print(int((((height*2-1)-(2*i-1))/2)) * " ",  (2*i-1)*"o")

def feladatHarom():
    start = int(input("Kezdo ertek: "))
    dif = int(input("Differencia: "))
    db = int(input("Elemszam: "))

    for i in range(start,start+db*dif,dif):
        print(i, end=" ")

def feladatNegy():
    a = int(input("a: "))
    b = int(input("b: "))

    if a > b:
        for i in range(a,b,-b):
            print(i, end=" ")
    else:
        for i in range(b,a,-a):
            print(i, end=" ")

def feladatOt():
    for i in range(8):
        if i%2==0:
            print(4*"XXXX    ")
            print(4*"XXXX    ")
        else:
            print(4*"    XXXX")
            print(4*"    XXXX")

def feladatHat():

    for i in range(1000,10000):
        if i%(i//100) == 0:
            print(i, end=" ")

def feladatHet():
    N=int(input("N= "))
    fib1=1
    fib2=1
    print(fib1, end = " ")
    for i in range(N-1):
        fib2 = fib1-fib2
        fib1 = fib1+fib2
        print(fib1,end=" ")    

def feladatNyolc():
    start = int(input("Kezdo: "))
    intrest = int(input("Kamat: "))
    N = int(input("Evek szama: "))

    for i in range(N):
        start = start * (1+intrest/100)
    
    print("A penz a kamatos evek utan: ", round(start))

def feladatKilenc():
    K = int(input("K: "))
    sum=0

    for i in range(1,K+1):
        sum =  sum + i*(i+1)
    
    print(sum)

def feladatTiz():
    for i in range(1,101):
        if i%3 == 0 and i%5 == 0: 
            print("FizzBuzz", end = " ")
        elif i%3 == 0:
            print("Fizz", end = " ")
        elif i%5 == 0:
            print("Buzz", end = " ")
        else:
            print(i, end=" ")

main()