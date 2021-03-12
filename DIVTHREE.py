t = int(input())
for i in range(t):
    n, k, d = map(int, input().split())
    a = list(map(int, input().split()))
    total_problems = sum(a)
    total_possible_contests = int(total_problems/k)
    if(total_possible_contests>=d):
        print(d)
    elif(total_possible_contests<d):
        print(total_possible_contests)
 