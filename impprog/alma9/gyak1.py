from collections import Counter

a=list(zip(['a','b','c'],[1,2,3,4,5]))
print(a)

b=list(zip([1,2,3,4,5],[1,2,3,4]))
print(b)

c={x for x in[1,2,3,4,5,6,7,8]}
d={x for x in[4,5,6,7,8,9,1,2]}

print(c^d)
print(c-d)
print(c|d)
print(c&d)

e=dict(zip(list(range(1,11)), list(map(lambda x: x**2, range(1,11)))))
print(e)

dbN=0
dbK=0
f="SzIAtePriBekTe"
for i in f:
    if i.isupper():
        dbN=dbN+1
    else:
        dbK=dbK+1
print(dbN," ",dbK)

g=[1,1,2,2,3,3,4,4,5,5,6,7,8]
print(len([x for x in g if g.count(x)==1]))

szo="almalakoma"
h=list(set(szo))
for i in h:
    print(i, szo.count(i))

print(Counter(szo))

i=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
j=7
