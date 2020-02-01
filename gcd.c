#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
    int i, gcd;
    for(i=1; i <= a && i <= b; ++i)
    {
    if(a%i==0 && b%i==0)
    gcd = i;
    }
    printf("[!] GCD(%d,%d) = %d\n", a, b, gcd);
}
int main(){
    int a, b;
    printf("[!] GCD(a,b)\n[+] Enter value of a: ");
    scanf("%d", &a);
    printf("[+] Enter value of b: ");
    scanf("%d", &b);
    if(a == 0 && b >= 0){
        printf("[!] GCD(%d,%d) = %d\n", a, b, b);
        exit(0);
    }
    else if(a >= 0 && b == 0){
        printf("[!] GCD(%d,%d) = %d\n", a, b, a);
        exit(0);
    }
    else{
        gcd(a, b);
    }
    return 0;
}
