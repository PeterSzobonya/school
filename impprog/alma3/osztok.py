
n = int(input("Adjon meg egy szamot: "))

print("Az " , n ," szam osztoi: ")

for i in range(1,n+1):
	if n%i == 0:
		print (i , " ")
