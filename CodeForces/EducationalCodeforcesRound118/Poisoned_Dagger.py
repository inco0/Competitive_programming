import sys
import math
import time


def calc(x, a):
    sum = 0
    for i in range(len(a)-1):
        sum += min(x, a[i+1] - a[i])
    sum += x
    return sum


def recur(x, a, h, min, max):
    if min == max:
        return min
    #if max == min+1:
        #if calc(max, a) > h:
            #return
    poison = calc(x, a)
    if poison > h:
        sp = calc(x-1, a)
        if sp < h:
            return x
        elif sp == h:
            return x-1
        else:
            return recur((min+x)//2, a, h, min, x-1)
    elif poison == h:
        return x
    else:
        return recur((x+max)//2, a, h, x+1, max)


def solve():
    n, h = map(int, sys.stdin.readline().split())
    a = list(map(int, sys.stdin.readline().split()))
    global st
    st = time.time()
    min, max = math.ceil(h/n), h
    if n == 1:
        print(h)
        return
    if h <= n:
        print(1)
        return
    init = math.floor((min+max)/2)
    print(recur(init, a, h, min, max))


if __name__ == "__main__":

    n = int(input())
    while n:
        n -= 1
        solve()
    print(" %s " % (time.time() - st))