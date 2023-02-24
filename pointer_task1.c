#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x =10 ;
    printf(" num before change is: %d\n",x);
    int *p = &x ;
    *p = 20 ;
    printf(" num after change is :%d",x);
    return 0 ;
}