# cook your dish here
def height(N):
    left = 1
    right = N
    while left <= right:
        mid = (left + right) // 2
        sum = (mid * (mid + 1)) // 2
        if sum <= N:
            left = mid + 1
        else:
            right = mid - 1
            
    return right
T = int(input())
for i in range(T):
    # N = int(input())
    print(height(int(input())))
