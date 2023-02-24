#include <stdio.h>
#include <stdlib.h>
int sum (int *x,int *y){
    return(*x+*y);
}
int main()
{
    int x ,y ;
    printf("entere the first num : ");
    scanf("%d",&x);
    printf("entere the second num : ");
    scanf("%d",&y);
    
    printf("the sum of the two integers is : %d", sum(&x,&y));
    return 0 ;
}