#coding:utf-8

import sys

def gcd(a, b):
    if a == 0:
        return b
    else:
        return gcd(b%a, a)

def main():
    a = int(input("[!] GCD(a,b)\n[+] Enter value of a: "))
    b = int(input("[+] Enter value of b: "))
    c = gcd(a,b)
    print("[!] GCD({},{}) = {}".format(a,b,c))
    sys.exit()

main()
