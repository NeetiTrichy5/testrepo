#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    long int m,n,sum=0,c=0,temp;
    scanf("%ld%ld",&m,&n);                 /*Enter number of toffees m and total rupees n */
    int a[m];
    for(int i=0;i<m;i++)
    {
        scanf("%ld",&a[i]);
    }

      for(int i = 0; i < m; i++)                      /*Sort the price of toffes using bubble sort*/
    {
      for(int j = i+1; j < m; j++)
        {
            if(a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0;i<m;i++)                               /*Start adding minimum valued toffee to obtain maximum number of toffees*/
    {
        sum=sum+a[i];
        if(sum<=n)
            c++;
    }
    printf("%ld",c);                                     /*Print the count of maximum toffees*/
}

