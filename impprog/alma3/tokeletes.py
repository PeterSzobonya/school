def tokeletes(n):
	seged = 0
	for i in range(1,n):
		if n%i == 0:
			seged += i
	if seged == n:
		print("Tokeletes szam")
	else:
		print("Nem tokelets szam")


n = int(input("Adjon meg egy szamot "))

tokeletes(n)
