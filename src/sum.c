#include "sum.h"

int sum(int a[], int n)
{
    int s = 0;
    (n > 0) && (s = a[n-1] + sum(a,n-1));
    return s;
}
