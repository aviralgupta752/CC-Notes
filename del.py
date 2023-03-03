t = int(input())
for i in range(t):
    n = int(input())
    mod = 1000000007
    ans = (n*(n+1)*(2*n+1))//3 + (n*(n+1))//2
    ans = ans - n*(n+1)
    print(int((ans*2022)%mod))