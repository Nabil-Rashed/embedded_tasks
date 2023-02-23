#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int i=0;
    int j=0;
    int k=0 ;
    printf("Enter size of the array  ");
    scanf("%d",&x);

    int arr[x],arr2[x];

    printf("Enter the elements : ");

    for(int i=0; i<x; i++)
    {
        scanf("%d",&arr[i]);
    }

    

    while(j<x)
    {
        for(int i=0; i<x; i++)
        { 
            if(j != i)
            {
               if(arr[j]==arr[i])
                 {
                   arr2[j]=arr[i];
                   break;
                  }
                 
             }
            
            else 
            continue ;
            
                k++;
            
        }
         if(k==(x-1))
                arr2[j]=0;
        j++;
        k=0;
    }

    printf("repeating Elements in the given array are : ");
    for(int i=0; i<x; ++i)
    {
        if (arr2[i]!=0)
        printf("%d\t",arr2[i]);
    }
    return 0;
}