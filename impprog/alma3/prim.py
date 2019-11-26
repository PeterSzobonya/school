def prim(n):
	oszto = 0
	for i in range(1,n+1):
		if n%i == 0:
			oszto +=1
	if oszto == 2:
		print("Ez egy prim")
	else:
		print("Ez nem prim")


n = int(input("Adjon meg egy szamot: "))

prim(n)
