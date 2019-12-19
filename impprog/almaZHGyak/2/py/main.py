import random
from takeBy import takeFilter

n=int(input("Adja meg a lista hosszat: "))
t=[]

for i in range(n):
    t.insert(i,random.randrange(-100,101,1))

print(t)

n2=int(input("A reszlista hossza: "))
t2 = takeFilter(t,n2)

print(t2)