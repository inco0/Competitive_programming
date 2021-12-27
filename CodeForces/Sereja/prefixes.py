sereja_list = []
stages = int(input())
input_list = [list(map(int, input().split())) for i in range(stages)]
n_of_elem = int(input())
interesting_numbers = set(list(map(lambda inp: int(inp), input().split())))
#print(interesting_numbers)
#interesting_numbers = set(i for i in range(15000))

n_of_prints = 0
for input_line in input_list:
    if n_of_prints == n_of_elem:
        break
    type_of_input = input_line[0]
    if type_of_input == 1:
        n_to_add = input_line[1]
        if n_to_add in interesting_numbers:
            print(n_to_add, end=' ')
            n_of_prints += 1
        sereja_list.append(n_to_add)
    else:
        amount = int(input_line[2])
        elements = int(input_line[1])
        tmp_list = sereja_list[:elements]
        for n in range(amount):
            for x in tmp_list:
                if x in interesting_numbers:
                    print(x, end=' ')
                    n_of_prints += 1
                sereja_list.append(x)

"""
for i in range(stages):
    input_list = input().split()
    if int(input_list[0]) == 1:
        sereja_list.append(int(input_list[1]))
    else:
        amount = int(input_list[2])
        elements = int(input_list[1])
        tmp_list = sereja_list[:elements]
        for n in range(amount):
            for x in tmp_list:
                sereja_list.append(x)
index = 0
if 14501 in interesting_numbers:
    print("TRUE")
for n in range(n_of_elem):
    while sereja_list[index] not in interesting_numbers:
        index += 1
    print(sereja_list[index], end=' ')
    index += 1
"""