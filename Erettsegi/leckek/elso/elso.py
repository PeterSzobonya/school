def main():
    #egesz()
    #tort()
    #logikai()
    
    #karakterlanc()
    #lista()
    #asszociativ()
    #halmaz()



def egesz():
    #egesz szam
    myint=12  
    print(myint)
    myint=myint+7
    print(myint)

    print(myint + 1.2) #ha tortszammal adod ossze akkor atalakul float -ta

def tort():
    #float
    myfloat=12.12
    print(myfloat)
    myfloat=myfloat/6.66
    print(myfloat) #megadott szamu tizedesjegyek kiirasa -> print("%.2f" % valtozo)

def logikai():
    #logikai ertek
    mybool=False
    print(mybool)
    mybool=True
    print(mybool)

def karakterlanc():
    #karakterlanc
    mystring="Szeretem a tejet"
    print(mystring)
    #stringek osszadasa
    mystring=mystring+" igen es a csokisat is?"
    print("stringek osszeadasa:", mystring)
    #stringbol karakter kiszedese
    print("karakter stringbol:", mystring[0])
    print("pozotov indexeles: ", mystring[0:10])
    print("negativ indexeles:", mystring[-12:-1])
    #string hossza
    print("string hossza", len(mystring))
    #nagybetu, kisbetu, elso nagy
    print("nagybetus:", mystring.upper())
    print("kisbetus:", mystring.lower())
    print("elso nagy:", mystring.capitalize())
    #replace
    print("replace:",mystring.replace("Szeretem", "Imadom"))
    #szavakra bontas
    print("szavakra bontas:", mystring.split()) #listat keszit
    #benne van a stringben
    print("benne van a stringben?(tejcsi):", "tejcsi" in mystring)
    #hasznos
        #\n - uj sor
    print("uj sor:", "\nalma\nlakoma")
        #\t - tabulator
    print("tabulator:", "alma\t\tlakoma")

def lista():
    mylist=[0,1,2,3,4,5,6,7,8,9]
    print(mylist)
    #elem hozzaadasa
    mylist.append("alma")
    print("elem hozzaadasa:", mylist)
    #elem hozzaadasa index alapjan
    mylist.insert(3,"korte")
    print("elem hozzadasa indexel",mylist)
    #elem torlese
    mylist.remove(2)
    print("elem torlese:", mylist)
    #lista hossza
    print("lista hossza:", len(mylist))
    #lista rendezese
    mylist2=[1,6,3,2,9,8,4]
    mylist2.sort()  #forditott rendezes -> mylist2.sort(reverse=True)
    print("lista sorbarendezes:", mylist2)
    #ugyanugy osszeadhato mint a string, ellenorizheto hogy benne van-e stb

def asszociativ():
    mydict={ "egy" : "egy almafa", "ketto" : "ket katica", 3 : 4}
    #ertek elerese
    print(mydict["ketto"])
    #kulcsok
    print("a kulcsok:", mydict.keys())

def halmaz():
    #halmaz
    myset={"almafa","katica","kiskacsa"}

    print(myset)

    if not("repulo" in myset):
        myset.add("repulo")

    print(myset)


#main futtatasa
main()