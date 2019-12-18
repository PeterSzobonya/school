

def fibs2(n,k):
    k.insert(0,1)
    k.insert(1,1)

    for i in range(2,n,1):
        k.insert(i,k[i-1]+k[i-2])