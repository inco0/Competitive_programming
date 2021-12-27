
def foo():
    n = int(input())
    a = list(map(int, input().split()))
    a = list(range(1, 10000))
    a.sort(reverse=True)
    s = set(a)
    pf = 0
    for i in range(n):
        for j in range(i+1, n):
            if (a[i] % a[j] not in s) & (a[i] > a[j]):
                print(a[i], a[j])
                pf += 1
                if pf == n//2:
                    return


if __name__ == "__main__":
    t = int(input())
    while t:
        t -= 1
        foo()
