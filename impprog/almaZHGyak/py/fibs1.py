

def firstNFibs(n):
    fibs=[1,1]
    for i in range(2,n,1):
        fibs.insert(i,fibs[i-1]+fibs[i-2])
    return fibs