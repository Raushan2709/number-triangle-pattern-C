// in this pattern u will see that number will be print in triangle form ...
#include <stdio.h>
int main()
{
    int n;
    printf("enter the no. :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);

        }
        printf("\n");

    }
    return 0;
}