#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int lazylad(int b)                                 
{
    int sum=0,n=1,c=0;
    while(sum<=b)                                      /* Execute the while loop till sum of boxes is not greater than total number of boxes */
    {
        sum+=n;                                       /* adding n natural numbers starting with 1 to compare with the number of boxes */
        n++;
        if(sum<=b)                                   /* when sum of first n natural number is less than or equal to the given number of box then one complete row is obtained */
        c++;
    }
    return c;
}

int main()
{
    int q,b,c;
    scanf("%d",&q);
    for(int i=1;i<=q;i++)                                        /* loop for q number of rooms */
    {
    scanf("%d",&b);                                              /* Enter b number of boxes */
    c=lazylad(b);                                                /* function calling to calculate the number of complete rows for b boxes */
    printf("%d\n",c);
    }
}
