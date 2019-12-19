

def unzip(str):
    length=len(str)
    unzipLen=0
    for i in range(length):
        if str[i]=='[':
            start=ord(str[i+1])
            end=ord(str[i+3])
            unzipLen=unzipLen+(end-start)
            unzipLen=unzipLen-4
        unzipLen += 1

    j=0
    unzipStr=[]
    for i in range(length):
        if str[i] == '[':
            start=ord(str[i+1])
            end=ord(str[i+3])
            while start <= end:
                unzipStr.insert(j,chr(start))
                j=j+1
                start=start+1
        if str[i-1] != '[' and str[i-2] != '[' and str[i-3] != '[' and str[i] != '[' and str[i-4] != '[':
            unzipStr.insert(j,str[i])
            j=j+1

    for i in range(unzipLen):
        print(unzipStr[i], end='')