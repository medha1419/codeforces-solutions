import sys
input = sys.stdin.readline
 
t = int(input())
for _ in range(t):
    n = int(input())
    arr = []
    while len(arr) < n:
        arr.extend(map(int, input().split()))
    score = 0
    for num in arr:
        if num == 0:
            score += 1
        else:
            score += num
    print(score)