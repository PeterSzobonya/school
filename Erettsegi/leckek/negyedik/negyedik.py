def main():
    #fileOlvas()
    #fileIr()
    #fileFuz()
    
    #feladatEgy()
    #feladatKetto()
    #feladatHarom()


def fileOlvas():
    #file megnyitasa "r"->read modban
    file = open("olvas.txt", "r")

    #egesz file beolvasasa egy stringbe
    words=file.read()
    file.close()
    
    file = open("olvas.txt", "r")
    #egy sor beolvasasa listaba
    line = file.readline()
    file.close()

    file = open("olvas.txt", "r")
    #sorokat olvas be egy listaba
    lines = file.readlines()
    file.close()

def fileIr():
    #file elkeszitese es megnyitasa
    file = open("kimenet.txt", "w")
    #a file-ba iras
    file.write("Hello szia")
    file.newlines()
    #file lezarasa
    file.close()

def fileFuz():
    #file megnyitasa "a" -> append modban
    file = open("kimenet.txt", "a")
    #iras a fileba
    file.write("\nEz egy hozza fuzott sor")
    #megnyitott file bezarasa
    file.close()


def feladatEgy():
    file = open("forras1.txt", "r")
    lines=file.readlines()
    file.close()
    nums=[]

    for i in lines:
        nums.append(int(i.split()[0]))

    print(nums)

    sum=0
    for i in nums:
        sum+=i
    print("a szamok osszege: ", sum)

def feladatKetto():
    file = open("forras2.txt", "r")
    lines = file.readlines()
    file.close()
    mtx=[]

    for i in lines:
        mtx.append(i.split())

    print(mtx)
    print("Az 5os: ", mtx[1][1])
    sum=0

    for i in mtx:
        sum+=int(i[1])
    print("az osszes sor masodik elemeinek az osszege: ", sum)

def feladatHarom():
    file = open("forras3.txt", "r")
    lines= file.readlines()
    file.close()
    students=[]

    for i in lines:
        line=i.split()
        student={"nev" : str(line[0]), "mat" : float(line[1]), "hiany" : int(line[2])}
        students.append(student)

    #print(students)
    
    for i in students:
        print(i["nev"],"\t", i["mat"])

main()