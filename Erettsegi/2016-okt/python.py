def mpbe(o,p,mp):
    result=mp
    result=result+p*60
    result=result+o*60*60
    return result

o=int(input("Adja meg az orat: "))
p=int(input("Adja meg a percet: "))
mp=int(input("Adja meg a masodpercet: "))

print("1.feladat")
print(mpbe(o,p,mp))

file=open("hivas.txt", 'r')
lines=file.readlines()

x=[]
id=0
for i in lines:
    x.insert(id,i.split())
    id=id+1

print("\n2.feladat-beolvasas\n")

thirdres={"1":0,"2":0,"3":0,"4":0,"5":0,"6":0,"7":0,"8":0,"9":0,"10":0,"11":0,
"12":0,"13":0,"14":0,"15":0,"16":0,"17":0,"18":0,"19":0,"20":0,"21":0,"22":0,"23":0,"24":0}

tempint=[]
max=0
maxid=0
for i in lines:
    tempint=i.split()
    thirdres[tempint[0]]=thirdres[tempint[0]]+1
    if thirdres[tempint[0]] > max:
        maxid=tempint[0]
        max=thirdres[tempint[0]]

print("3.feladat")
print(maxid)

max=0
id=0
length=0
maxid=0
for i in lines:
    id=id+1
    tempint=i.split()
    length=mpbe(int(tempint[3]),int(tempint[4]),int(tempint[5]))-mpbe(int(tempint[0]),int(tempint[1]),int(tempint[2]))
    if length > max:
        max = length
        maxid=id

print("\n4.feladat")
print("id: ",maxid, " a hossza: ",max)

felhora=int(input("Adja meg a keresett orat: "))
felhperc=int(input("Adja meg a keresett percet: "))
felhmp=int(input("Adja meg a keresett masodpercet: "))
felh=mpbe(felhora,felhperc,felhmp)

id=0
resid=0
varakozok=-1
start=0
end=0
for i in lines:
    id=id+1
    tempint=i.split()
    if id==1:
        start=mpbe(int(tempint[0]),int(tempint[1]),int(tempint[2]))
        end=mpbe(int(tempint[3]),int(tempint[4]),int(tempint[5]))
        if felh<start :
            print("5.feladat\nNem volt beszelo, senki sem vart")
        if felh>start and felh<end:
            resid=id
            varakozok=0
    else:
        if mpbe(int(tempint[3]),int(tempint[4]),int(tempint[5])) > end:
            start=end
            end=mpbe(int(tempint[3]),int(tempint[4]),int(tempint[5]))
            if felh>start and felh<end:
                if resid == id-1:
                    varakozok=varakozok+1
                else:
                    resid=id
                    varakozok=0

print(resid,"varakozok: ",varakozok+1)
            
