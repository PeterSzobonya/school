def main():
    # feladatEgy()
    #feladatKetto()
    #feladatHarom()
    #feladatNegy()
    #feladatOt()
    #feladatHat()
    #feladatHet()
    feladatNyolc()
    #feladatKilenc()
    #feladatTiz()


def feladatEgy():
    #ird ki a 360 osztoit
    for i in range(1,361):
        if 360%i==0:
            print(i, end=" ")

def feladatKetto():
    #irj ki visszafele egy stringet
    mystr="almalakoma"

    for i in range(len(mystr)-1,-1,-1):
        print(mystr[i],end="")

    #print(mystr[::-1])

def feladatHarom():
    #kombinald ossze a listakat egy uj listaba egy elem ebbol egy elem abbol szepen sorban
    mylist1=[1,2,3]
    mylist2=["almafa","katica","kiskacsa"]
    finalList=[]

    for i in range(3):
        finalList.append(mylist1[i])
        finalList.append(mylist2[i])

    print(finalList)

def feladatNegy():
    #ird ki a paros szavakat
    mystr="Ugule bugule stafiti tu tutiti makiki sokipi bu"
    wordlist=mystr.split()
    counter=1

    for i in wordlist:
        if counter%2==0:
            print(i, end=" ")
        counter+=1

def feladatOt():
    #listabol keszits uj listat ugy hogy minden elem egyedi legyen
    mylist=[1,1,2,3,4,5,3,4,5,3,2,4,1,2,3,4,1,2,3]
    newlist=[]

    for i in mylist:
        if not (i in newlist):
            newlist.append(i)
    
    print(newlist)

def feladatHat():
    #360 es 250 kozos osztoi
    haromHatvanOsztoi=[]
    
    for i in range(1,361):
        if 360%i==0:
            haromHatvanOsztoi.append(i)

    for i in range(1,251):
        if 250%i==0 and i in haromHatvanOsztoi:
            print(i, end=" ")

def feladatHet():
    #hany darab prim van 100 es 150 kozott
    primek=0

    for i in range(100,151):
        db=0
        for j in range(1,i+1):
            if i%j==0:
                db+=1
        if db==2:
            primek+=1

    print(primek)

def feladatNyolc():
    #ird ki a szavak elso betujet nagybetuvel
    mystr="Ugule bugule stafiti tu tutiti makiki sokipi bu"
    wordlist=mystr.split()

    for i in wordlist:
        print(i[0].upper(), end=" ")

def feladatKilenc():
    #ird ki a lista legnagyobb es legkisebb elemet
    mylist=[1,15,66,79,-99,100,15,-666]
    mylist.sort()
    print("legnagyobb: ", mylist[-1])
    print("legkisebb:  ", mylist[0] )

def feladatTiz():
    #hanyadik betu az x az angol abc-ben
    abc="abcdefghijklmnopqrstuvwxyz"
    myLetter='x'
    index=1

    for i in abc:
        if myLetter == i:
            print(index)
        index+=1

main()