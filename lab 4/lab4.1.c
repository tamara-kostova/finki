/*Од тастатура се чита еден непарен цел број n кој е поголем или еднаков на 5. Со помош на знакот * да се исцрта математичкиот симбол за бесконечност, кој би се добил како во примерот подолу, за n=5:

*   *
** **
* * *
** **
*   **/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if (j==0||i==j||j==n-1||i==n-j-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
