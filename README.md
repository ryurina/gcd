# GCD : Greatest common divisor 
## For finding the gcd of two numbers

## 1 - Definition
```
    In mathematics, the greatest common divisor of two or more integers, which are not all zero, is the largest positive integer that divides each of the integers. For example, the gcd of 8 and 12 is 4. The greatest common divisor is also known as the greatest common factor, highest common factor, greatest common measure, or highest common divisor. This notion can be extended to polynomials and other commutative rings.
```
[Read more](https://en.wikipedia.org/wiki/Greatest_common_divisor)

## 2 - Algorithm proposed by Wikipedia
```
Input: a, b positive integers
Output: g and d such that g is odd and gcd(a, b) = g × 2d
    d := 0
    while a and b are both even
        a := a/2
        b := b/2
        d := d + 1
    while a ≠ b
        if a is even then a := a/2
        else if b is even then b := b/2
        else if a > b then a := (a – b)/2
        else b := (b – a)/2
    g := a
    output g, d
```
### PS : You can improve the code or give your algorithm

Contact : ryurina23@gmail.com | Twitter: @ryurina23

> Feel Free !.
