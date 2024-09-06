# 0->k->...->( (p-1)*k ) } p times
# 1->k+1->...->( (p-1)*(k+1) ) } p times

# i%k==p

# for n and k: max elements in a row are n//k
# for n//k => mod0,mod1,mod2...mod p=>
# p*(n//k+1)+1

# we need to return (idx+1) of p assuming all gases are arranged in a 1D array
# 0 k   2k..    pk
# 1 k+1 2k+1  pk+1

# p index ka gas kaunsa line mein milega => p%k } real index
# so for at least (p%k) lines we can calculate => (p%k)*(n//k)
# these many days are there since no invention..
# 0
# 1
# 2 
# ..
# n-1
# => the line we are supposed to find p
# has first value in row as p%k=> let p%k=m
# row : m m+k m+2k.. 
# so days was (p%k)*(n//k)
# and we iterate as: for x in range(m,p*(m+n//k),k):
#     days+=1
#     if x ==p:
#         return days

# row first value is m 

for _ in range(int(input())): # number of test cases
    n,p,k=map(int,input().split()) # handling input
    # days=(p%k)*(n//k) #
    # m=p%k
    # print(days+1+(p-m)//k)
    days_before = (p % k) * (n // k) + min(p % k, n % k)
    
    # Calculate the day within the group
    days_within_group = (p - (p % k)) // k
    
    # Calculate total days
    total_days = days_before + days_within_group + 1
    
    print(total_days)
    























# 0,1,2,3,4,5,6,7,8,9,10
# n=11,p=2,k=3
# 0 3 6 9 => 0
# 1 4 7 10 => 1
# 2 => 2
# directly divide n by k integrally
# add +1
# return p*(n//k+2)
# 
# 
# for _ in range(int(input())):
#     n,p,k=map(int,input().split())
#     if p==0:
#         print(1)
#         continue
#     if p%k==0:
#         print(p//k+1)
#         continue
#     if p==1:
#         print((p%k)*(n//k)+2)
#         continue
#     else:
#         if k>=n:
#             print(n)
#             continue
#         print((p%k)*(n//k) + (p-p%k)//k+1)#//npk 312
# n=10 p=4 k=5
# 0 > 0 5
# 1 > 1 6
# 2 > 2 7
# 3 > 3 8
# 4 > 4
# 10 6 5
# 0 > 0 5
# 1 > 1
#  >>kitna baar ka matrix redundant rahega : (p%k) rows and (n//k) values in each rows
# (p%k) ke baad wala row mein 'p' rahega.. so [p-(p%k)] k se divisible hai
# jis number pe 'p' rahega wo [p-(p%k)]//k ke just baad wala hai..
# ans = (p-p%k)//k+1
# 2 1 3 test case >> array is 0 1
# 0 > 0 
# 0 > 0
# 1 > 1

# 3 1 2 >> arr= 0 1 2
# 0 > 0 2
# 1 > 1
# 
# 
# 
# 2 1 2 >> 0 1
# 

