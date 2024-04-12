def binpowmod(base, exp, mod):
    base %= mod
    res = 1

    while exp > 0:
        if exp & 1:
            res = (res *base) % mod
        
        base = (base * base) % mod
        exp >>= 1

    return res

def binpow(base, exp):
    res = 1

    while exp > 0:
        if exp & 1:
            res = (res *base)
        
        base = (base * base)
        exp >>= 1
        
    return res