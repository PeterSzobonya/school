import collections
compare = lambda x, y: collections.Counter(x) == collections.Counter(y)

def monot(t):
    lista= t.copy()
    tseg = lista.copy()
    tsegrev = lista.copy()
    tseg.sort()
    tsegrev.sort(reverse = True)


    if t==tseg or t==tsegrev:
        print("monot")
    else:
        print("nem monot")