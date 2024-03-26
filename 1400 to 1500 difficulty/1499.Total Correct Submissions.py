# cook your dish here
t=int(input())
for i in range(t):
    l={}
    k=int(input())
    for j in range(3*k):
        lstTemp=input().split()
        if lstTemp[0] in l:
            l[lstTemp[0]] += int(lstTemp[1])
        else:
            l[lstTemp[0]] = int(lstTemp[1])
    print(*sorted(l.values()))
    # print()  # Move to the next line
    l.clear()
  
