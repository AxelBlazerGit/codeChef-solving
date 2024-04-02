# cook your dish here
for i in range(int(input())):
    # for _ in range(int(input())):
    print(' '.join(word if word.isupper() else word[0].upper()+word[1:].lower() for word in input().split()))
