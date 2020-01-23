

def keres(lista,keresett):
    #print(lista)
    letezik=True
    megtalalt=False
    id=int(len(lista)/2)
    previd=0

    while(not(megtalalt) and letezik):
        if id == previd:
            letezik=False
        
        if lista[id] == keresett:
            megtalalt=True
        elif lista[id] < keresett:
            id=int((id+len(lista)-1)/2)
        else:
            id=int((0+id)/2)

    
    print(id)