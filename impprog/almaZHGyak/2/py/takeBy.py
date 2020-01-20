

def takeFilter(t,n2):
    t2=[]
    j=0
    i=0

    while i<len(t) and j<n2:
        if t[i] >= 0:
            t2.insert(j,t[i])
            j=j+1
        i=i+1
    
    if j<n2:
        while j<n2:
            t2.insert(j,0)
            j=j+1
    
    return t2
