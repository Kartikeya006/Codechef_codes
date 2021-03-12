test_cases = int(input())
for _ in range(test_cases):
    letters = str()
    lenght_of_string = int(input())
    encoded_string = input()
    each_letter = [(encoded_string[i:i+4]) for i in range(0, len(encoded_string), 4)]
    for parts in list(each_letter):
        alphabets = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p']
        lenght = len(alphabets)
        middle_index = lenght//2
        for char in parts:
            if(char=='0'):
                alphabets = alphabets[:middle_index]
                middle_index = middle_index//2
            elif(char=='1'):
                alphabets = alphabets[middle_index:]
                middle_index = middle_index//2
        letters = letters+alphabets[0]
    print(letters)
