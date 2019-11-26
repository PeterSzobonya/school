def megszamol(list,elem):
    db=0
    for i in list:
        if i == elem:
            db +=1
    return db

print megszamol([1,2,3,4,5,5], 1)