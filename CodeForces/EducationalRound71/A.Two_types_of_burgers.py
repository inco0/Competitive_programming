n_queries = int(input())
prices = []
ingredients_amount = []
for i in range(n_queries):
    ingredients_amount = (list(map(int, input().split())))
    prices = (list(map(int, input().split())))
    if ingredients_amount[i][0] < 2:
        print(0)
    else:
        sum = 0
        if prices[i][0] > prices[i][1]:
            n_of_humber = how_many_to_sell(ingredients_amount[i][0], ingredients_amount[i][1])
            sum += n_of_humber*prices[i][0]
            n_of_chicken = how_many_to_sell(ingredients_amount[i][0] - 2*n_of_humber, ingredients_amount[i][2])
            sum += n_of_chicken* prices[i][1]
            print(sum)
        else:
            n_of_chicken = how_many_to_sell(ingredients_amount[i][0], ingredients_amount[i][2])
            sum += n_of_chicken * prices[i][1]
            n_of_humber = how_many_to_sell(ingredients_amount[i][0] - 2*n_of_chicken, ingredients_amount[i][1])
            sum += n_of_humber * prices[i][0]
            print(sum)

def how_many_to_sell(buns, meat):
    if meat*2 <= buns:
        return meat
    else:
        return buns//2
