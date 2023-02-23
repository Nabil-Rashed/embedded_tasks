#include <stdio.h>

#include<stdio.h>

int main()
{
int i ,x ;  
 int max =0 ;
printf("enter the size of the array");
    scanf("%d", &x);
  int a[x];
  
 printf("enter the elements of the array");
    for (i = 0; i < x; ++i)
    {
        scanf("%d", &a[i]);
    }
    
      for( i=0;i<x;++i ) 
      { 
      if (a[i]>max )        
          max= a[i] ; 
      }
    
for( i=0;i<x;++i )    { 
      if (a[i]==max )   
    a[i]=0;

   }
     max=0 ;
for( i=0;i<x;++i )
    { 
      if (a[i]>max )        
          max= a[i] ; 
    }
printf(" the second max is :%d",max);           
    
return 0;
}