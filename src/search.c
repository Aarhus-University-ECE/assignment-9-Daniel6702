#include "search.h"
#include <stdbool.h>

bool search(int a[], int n, int x)
{
    if (n>0 && a[n-1] == x) { //if element is found return true
        return true;
    } else if (n == 0) { //if all element has been checked return false
        return false;
    } else {
        search(a,n-1,x); //search again 
    }
}
