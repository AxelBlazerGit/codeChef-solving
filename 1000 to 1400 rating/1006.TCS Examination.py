# cook your dish here
for _ in range(int(input())):
    x = list(map(int, input().split()))
    y = list(map(int, input().split()))
    
    dragon = sum(x)
    sloth = sum(y)
    
    print("dragon" if dragon > sloth else "sloth" if dragon < sloth else "dragon" if x[0] > y[0] else "sloth" if x[0] < y[0] else "dragon" if x[1] > y[1] else "sloth" if x[1] < y[1] else "tie")

    
