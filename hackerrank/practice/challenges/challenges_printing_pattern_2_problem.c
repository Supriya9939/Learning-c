/*rint a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,k,m,i,j;
    scanf("%d",&n);
    k=2*n-1;
    for(i=n;i>=2;i--)
    {
        m=n;
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=n-i)
            {
            printf("%d ",m);
            m--;
            }
            else if(j<k)
            {
                printf("%d ",m);
            }
            else
            {
            printf("%d ",m);
            m++;
            }
        }
        printf("\n");
        k--;
    }

    k=n;
    for(i=1;i<=n;i++)
    {
        m=n;
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=n-i)
            {
            printf("%d ",m);
            m--;
            }
            else if(j<k)
            {
                printf("%d ",m);
            }
            else
            {
            printf("%d ",m);
            m++;
            }
        }
        printf("\n");
        k++;
    }
    return 0;
}
