#include <stdlib.h>

int main() {

    int i=0, x=0;
    
    int max = 0;
    int z=0;
    int n = 0;
    int output=0;
    
    printf("enter the size of the array");
    scanf("%d", &x);
    int a1[x];
    int a2[x];
    printf("enter the elements of the array");
    
    for (i = 0; i < x; ++i) {
        scanf("%d", &a1[i]);
    }
    while (n < x)
    {
        for (i = 0; i < x; ++i)
        {
            if (a1[i] > max)
            {
                max = a1[i];
                z = i;
            }
        }
        a2[n] = max;
        max = 0;
        a1[z] = 0;
        ++n;
    }
    
    printf("enter 0 for ascending or 1 for descending ");
    scanf("%d", &output);
    
    if (output == 0)
    {
        for (int i = x - 1; i >= 0; --i)
        {

            printf("%d\n", a2[i]);
        }
    }
    if (output == 1)
    {
        for ( i = 0; i < x; ++i)
        {

            printf("%d\n", a2[i]);

        }
   }


            return 0;
    }