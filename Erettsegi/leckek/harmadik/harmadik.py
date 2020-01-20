def main():
    #whileciklus()
    #beolvas()
    
    #feladatEgy()
    #feladatKetto()
    #feladatHarom()
    #feladatNegy()
    feladatOt()


def whileciklus():
    myint=1
    while myint < 10:
        print(myint)
        myint=myint+1

def beolvas():
    myint=int(input("adjon meg egy szamot: "))
    print("A beolvasott szam:",myint)

def feladatEgy():
    #ird ki az elso 15 primszamot
    db=0
    i=2
    while db<=5:
        osztok=0
        for j in range(1,i+1):
            if i%j == 0:
                osztok=osztok+1
        if osztok==2:
            print(i)
            db=db+1
        i=i+1

def feladatKetto():
    #olvass be egy mondatot es vizsgald meg hogy az alma szo szerepel-e benne
    mystr=str(input("Irj be egy mondatot: "))
    if "alma" in mystr:
        print("Igen szerepel")
    else:
        print("Nem szerepel")

def feladatHarom():
    #Olvass be egy szoveget es ha nem szerepel a Gerike szo benne akkor addig olvasd be amig benne nem lesz
    mystr=str(input("Irjon be valamit: "))
    while not("gerike" in mystr.lower()):
        print("Nem szerepel a szovegben Gerike!")
        mystr=str(input("Irjon be mast: "))
    print("Szia egyetlenem!")

def feladatNegy():
    #Keszits egy programot ami beolvas egy szamot es az addigi osszes szamot osszeadja
    myint=int(input("Adj meg egy szamot: "))
    sum=0
    for i in range(myint+1):
        sum=sum+i
    print(sum)

def feladatOt():
    #Olvass be egy 10 elemu tombot aztan rendezd sorba es ird ki a legnagyobbat es a legkisebbet
    mylist=[]
    for i in range(10):
        print("A lista", i+1,". eleme: ", end="")
        mylist.append(int(input()))
    mylist.sort()
    print("A lista legkisebb eleme: ", mylist[0])
    print("A lista legnagyobb eleme:", mylist[-1])

main()