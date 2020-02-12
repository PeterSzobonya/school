def main():
    #feladatEgy()
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
    mylist=[]
    for i in range(5):
        row=[]
        for j in range(5):
            row.append(j)
        mylist.append(row)
    print(mylist)

def feladatKetto():
    mylist=[1,2,2,3,6,1,5,2,4,2,3,2,3]
    mydict={}
    for i in mylist:
        if i in mydict:
            mydict[i] += 1
        else:
            mydict.update({i:1})
    print(mydict)

def feladatHarom():
    mylist=[[0,1,2,3,4],[0,1,2,3,4],[0,1,2,3,4],[0,1,2,3,4],[0,1,2,3,4]]
    for i in mylist:
        print(i[1], end=" ")
    print()
    id=0
    for i in mylist:
        print(i[id], end=" ")
        id+=1

def feladatNegy():
    seg=1
    for i in range(5):
        for j in range(seg):
            print("x", end="")
        print()
        seg+=1

def feladatOt():
    seg=1
    for i in range(10):
        if i < 5:
            for j in range(seg):
                print("x", end=" ")
            print()
            seg+=1
        else:
            seg-=1
            for j in range(seg):
                print("x", end=" ")
            print()

def feladatHat():
    mylist=[]
    seg=0
    row=[]
    for i in range(1,26):
        if seg < 5:
            row.append(i)
            seg=seg+1
        if seg == 5:
            mylist.append(row)
            seg=0
            row=[]

    for i in range(5):
        for j in range(5):
            print(mylist[j][i], end=" ")
        print()

def feladatHet():
    sentence="Ez lakoma nem lakk, koma"
    if "lakoma" in sentence:
        words=sentence.split()
        for i in range(len(words)):
            if words[i] == "lakoma":
                print(i+1)
    else:
        print("Ez nem lakk, koma")

def feladatNyolc():
    mydict={"hetfo" : ["Alma", "Bela"], "kedd" : ["Arnold", "Matyas", "Bob"], "szerda" : [], "csutortok" : ["Arnold"], "pentek" : ["Arnold", "Bob"], "szombat" : [], "vasarnap" : []}
    for i in mydict:
        if "Arnold" in mydict[i]:
            print(i, end=" ")

def feladatKilenc():
    mystr = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."
    print(mystr.count("is"))

def feladatTiz():
    mystr="Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."
    mydict = {}
    max=0
    words=mystr.split()
    for i in words:
        if i in mydict:
            mydict[i] = mydict[i]+1
            if mydict[i] > max:
                max=mydict[i]
                maxid=i
        else:
            mydict.update({i:1})
    print(maxid,mydict[maxid])

main()