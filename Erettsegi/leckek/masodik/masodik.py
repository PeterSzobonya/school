def main():
    #haakkor()
    #forciklus()
    #feladatEgy()
    #feladatKetto()
    #feladatHarom()
    bonusz()


def haakkor():
    myint=5
    if myint==6:
        print("a valtozo erteke 6")
    elif myint==5:                                      #and False / or False
        print("a valtozo erteke 5")
    else:
        print("a valtozo erteke se nem 5 vagy 6")

def forciklus():
    #klasszikus for in range
    for i in range(10):
        print(i)
    #for listaban -> az i egyesevel felveszi a lista ertekeit
    mylist=[1,"almafa",2,"katica",3,"kiskacsa"]
    for i in mylist:
        print(i)

def feladatEgy():
    #ird ki az osszes 100-nal kisebb 5-tel oszthato szamot
    for i in range(5,100,5):
        print(i)

def feladatKetto():
    #keszits egy listat amiben az elso 10 szam szerepel, hasznalj for ciklust (hozz letre egy ures listat!)
    mylist=[]
    for i in range(10):
        mylist.append(i+1)
    print(mylist)

def feladatHarom():
    #szamolj el 10-szer 10-ig
    for i in range(10):
        for j in range(1,11):
            print(j, end = " ")
        print()

def bonusz():
    for i in range(2,20):
        osztok=0
        for j in range(1,i+1):
            if i%j == 0:
                osztok=osztok+1
        if osztok == 2:
            print(i)

main()