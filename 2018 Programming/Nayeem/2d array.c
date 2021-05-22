
#include<stdio.h>

int main()
{
    int i, j;
    int num[6][10];
    for (i = 20; i <= 25; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d X %d = %d\n", i, j, i*j);
            num[i-20][j-1]= i * j;
        }
        printf("\n");
    }
    for (i = 1; i <= 10; i++)
    {
        printf("\n%d X %d  = %d", 24,i,num[4][i - 1]);
    }
}
