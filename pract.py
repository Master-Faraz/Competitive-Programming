temp = 100000007


def fun(x, y, p):
    res = 1
    x = (x % p)

    if x == 0:
        return 0

    while(y > 0):

        if(y & 1):
            res = ((res*x) % p)
        y = y >> 1
        x = ((x*x) % p)

    return res

# .                              *****       Main Function       *****


t = int(input())

while t != 0:

    n = int(input())
    n=n-1
    result = fun(2, n, temp)
    print(result)

    t = t-1
