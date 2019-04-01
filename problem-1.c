#include<stdio.h>
int main()
{

    int limit, i, sum;
    sum=0;
    printf("Enter the limit:");
    scanf("%d", &limit);
    for(i = 1; i < limit; i++)
    {
        if((i%3==0)||(i%5==0))
        {
            sum=sum+i;
        }
    }
    printf("\nThe result is %d",sum);
    return 0;
}
