#include <stdio.h>

#include<stdio.h>

int main()
{
  int i ,j ;  
  int sum1 =0 ;
  int sum2 =0 ;
  int row_sum[5];
  int column_sum[5];

  int a[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
 
    for (i = 0; i < 5; ++i)
    {
       for (j = 0; j < 5; ++j)
       {
           sum1+=a[i][j];
           sum2+=a[j][i]; 
       } 
    row_sum[i]=sum1;
    column_sum[i]=sum2;
    sum1=0 ;
    sum2=0 ;
    }
    printf("  row_sum =");
     for (i = 0; i < 5; ++i){
printf("   %d",row_sum[i]); 
     }
      printf(" \n column_sum =");
     for (i = 0; i < 5; ++i){
printf("   %d",column_sum[i]); 
     }
return 0;
}