n, m = map(int, input().split())
B = [[0 for i in range(m)] for j in range(n)]
A = [list(map(int, input().split()))for i in range(n)]

def check_square(i, j):
    if A[i][j] == A[i+1][j] == A[i][j+1] == A[i+1][j+1] == 1:
        return True
    else:
        return False


k, lines, col = 0, 0, 0
output = []
flag = False
for lines in range(n-1):
    for col in range(m-1):
        if check_square(lines, col):
            k += 1
            B[lines][col] = 1
            B[lines+1][col] = 1
            B[lines][col+1] = 1
            B[lines+1][col+1] = 1
            output.append([lines+1, col+1])
        if (B[lines][col] == 0) & (A[lines][col] == 1) & (not check_square(lines, col)):
            flag = True
            print(-1)
            break
        elif lines == n - 2:
            if (B[lines + 1][col] == 0) & (A[lines + 1][col] == 1):
                flag = True
                print(-1)
                break
    if (B[lines][m-1] == 0) & (A[lines][m-1] == 1) & (flag == False):
        flag = True
        print(-1)
        break
    if flag:
        break
if (B[n-1][m-1] == 0) & (A[n-1][m-1] == 1) & (flag == False):
    flag = True
    print(-1)

if not flag:
    print(k)
    for x in output:
        print(x[0], x[1])