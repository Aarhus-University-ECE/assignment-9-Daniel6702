//#include "sum.h"
#include <stdio.h>

int sum(int a[], int n)
{
    int s = 0;
    (n > 0) && (s = a[n-1] + sum(a,n-1));
    return s;
}

int gcd(int a, int b) {
    if (a == b) {
        return a;
    } else if (a>b) {
        gcd(a-b,b);
    } else if (a<b) {
        gcd(a,b-a);
    }
}

int main(void) {
    printf("%d",gcd(16,8));
    return 0;
}