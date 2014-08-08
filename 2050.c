#include<stdio.h>
int calc(int x)
{
    int sum;
    sum=2*x*x-x+1;
    return sum;
}
int main()
{
    int n,cache;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&cache);
        printf("%d\n",calc(cache));
    }
    return 0;
}
