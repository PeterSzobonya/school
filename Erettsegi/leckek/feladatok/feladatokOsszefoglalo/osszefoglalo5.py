"""
people = []

for i in range(5):
    mydict={}
    nev = str(input("Adja meg a nevet: "))
    kor = int(input("Adja meg a kort: "))
    mag = int(input("Adja meg a magassagot: "))

    mydict.update( {"nev" : nev, "kor" : kor, "mag" : mag} )

    people.append(mydict)
"""
people = 	[ { "nev" : "Jani", "kor" : 19, "mag" : 180},  { "nev" : "Dani", "kor" : 21, "mag" : 160},  
	{ "nev" : "Lili", "kor" : 14, "mag" : 172},  { "nev" : "Diego", "kor" : 45, "mag" : 152},
	{ "nev" : "Junior", "kor" : 5, "mag" : 123} ]

maxMag = 0

for i in people:
    if i["mag"] > maxMag:
        maxMag = i["mag"]

print("Masodik feladat")
print(maxMag)



print("\nHarmadik feladat")
names=[]
for i in people:
    names.append(i["nev"])

names.sort()

print(names)


print("\nNegyedik feladat")

for i in range(0,4):
    for j in range(i+1,5):
        if people[i]["mag"] > people[j]["mag"]:
            people[i], people[j] = people[j], people[i]

for i in people:
    print(i["nev"], i["mag"])


