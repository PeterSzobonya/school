def beolv(n, L = []):
	for i in range(0,n):
		L.append(int(input("")))

def ir(L = []):
	for i in range(0,len(L)):
		print(L[i], " ")

n = int(input("Adjon meg egy szamot "))

alma = []

beolv(n, alma)
ir(alma)
