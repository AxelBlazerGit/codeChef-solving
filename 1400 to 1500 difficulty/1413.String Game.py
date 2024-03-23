# cook your dish here
t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    moves=0
    while("10" in s or "01" in s):
        if "10" in s:
            s=s.replace("10", "", 1)
            moves+=1
        elif "01" in s:
            s=s.replace("01", "", 1)
            moves+=1
    if(moves%2==0):
        print("ramos")
    else:
        print("zlatan")
        
