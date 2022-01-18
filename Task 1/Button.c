#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int p,q,r,s,x;
    scanf("%d%d%d%d",&p,&q,&r,&s);
    x=(q<=r)?0:(s>q)?(p<r)? abs(q-r):abs(q-p):(p<r)?abs(s-r):(p<s)?abs(s-p):0;
    printf("%d",x);
}






/* naive approach in the beginning */
/* written this code by considering all the conditions possible with the given four numbers and then optimised it using conditional operator in the end which ultimately minimise the code in one line */

/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int p,q,r,s,x;
    scanf("%d%d%d%d",&p,&q,&r,&s);
    if(q<=r)                                                                        /* q<=r */
        x=0;
    else                                                                                /* q>r */
    {
       if(s>q)
      { 
           if(p<r)
           x= abs(q-r);
           else
           x= abs(q-p);
       }
       else
      { 
           if(p<r)
           x=abs(s-r);
           else
       {   
            if(p<s)
            x=abs(s-p);
            else 
            x=0;
       }
      }
    }
    printf("%d",x);
}
*/



