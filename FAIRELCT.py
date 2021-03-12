test_cases = int(input())
for _ in range(test_cases):
    count = 0
    flag = 0
    john_packs, jack_packs = map(int, input().split())
    minimum = min(john_packs, jack_packs)
    john_packs_values = list(map(int, input().split()))
    jack_packs_values = list(map(int, input().split()))
    john_total = sum(john_packs_values)
    jack_total = sum(jack_packs_values)
    if(john_total>jack_total):
        print(count)
    else:
        john_packs_values.sort()
        jack_packs_values.sort(reverse=True)
        for i in range(minimum):
            c = jack_packs_values[i]
            jack_packs_values[i] = john_packs_values[i]
            john_packs_values[i] = c
            count += 1
            if(sum(john_packs_values)>sum(jack_packs_values)):
                flag = 1
                break
            else:
                continue
        if(flag == 1):
            print(count)
        else:
            print(-1)
