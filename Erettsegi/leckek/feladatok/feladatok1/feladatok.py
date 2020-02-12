def main():
    #feladatEgy()
    #feladatKetto()
    #feladatHarom()
    #feladatNegy()
    #feladatOt()
    #feladatHat()
    #feladatHet()
    #feladatNyolc()
    #feladatKilenc()
    feladatTiz()



def feladatEgy():
    numbers=[17,6,99,25,-5]
    numbers.sort()
    
    print(numbers)

    print(numbers[0], numbers[-1])

def feladatKetto():
    szoveg="Ki battya a legnegyobb vagany"
    szavak=szoveg.split()

    print(szavak[1].upper())

def feladatHarom():
    nums1=[1,2,3,4,99]
    nums2=[2,9,6,77,49]
    nums3=nums1+nums2
    nums3.sort(reverse=True)

    print(nums3[0])

def feladatNegy():
    szoveg1="Az alma az istenek eledeleeeee"
    szoveg2="A korte bekaphatja a fszomat"
    if "alma" in szoveg1:
        print(szoveg1)
    else:
        print(szoveg2+" alma")

def feladatOt():
    string="Az en nekem a kedves etelem az almaspitE"
    word="aLmASpItE"
    if word.lower in string.lower:
        print("almalakoma")

def feladatHat():
    nums=[1,2,3,4,5,6]
    if 6 in nums:
        nums.remove(6)
        print(nums)

def feladatHet():
    mydict={"nev" : "Neebs", "kor" : 69, "mag" : 180}
    print(mydict["nev"], mydict["mag"])

def feladatNyolc():
    nums=[1,2,3,4,5,6,7,8,9]
    print(nums[2:6])

def feladatKilenc():
    mystr="A fold lapos de kozben ugy mukodik mint egy futoszallag es ha az also szakaszban vagyunk akkor van ejjel"
    words=mystr.split()
    print(words)

def feladatTiz():
    mystr="A fold lapos de kozben ugy mukodik mint egy futoszallag es ha az also szakaszban vagyunk akkor van ejjel"
    words=mystr.split()
    print(len(words))


main()