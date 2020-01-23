def unpack(string):
    newstr=[]

    for i in range(len(string)):
        if string[i] == '[':
            start = ord(string[i+1])
            end = ord(string[i+3])
            while start<=end:
                newstr.append(chr(start))
                start+=1
        elif string[i-1] != '[' and string[i-2] != '[' and string[i-3] != '[' and string[i-4] != '[':
            newstr.append(string[i])

    for i in newstr:
        print(i,end="")