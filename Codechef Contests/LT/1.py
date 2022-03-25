for i in range(int(input())):
    n=input()
    ans=False
    for i in range(1, len(n)):
        if((int(n[:i])+int(n[i:]))%2==0):
            ans=True
            break
    
    if(ans):
        print("YES")
    else:
        print("NO")