
def main():
    n = int(input())
    h = list(map(int,input().split()))
    dp = [float("inf") for _ in range(n+2)]
    dp[0] = 0
    for i in range(n):
        for j in [1,2]: # Either 1 stone jump or 2 stone jump
            if i+j < n:
                dp[i+j] = min(dp[i+j], dp[i]+abs(h[i] - h[i+j]))
    print(dp[n-1])

if __name__ == "__main__":
    main()