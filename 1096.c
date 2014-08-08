#include<stdio.h>
int main()
{
    int a,b,i,j,l[1000],k;
    scanf("%d",&i);
    getchar();
    for(j=1;j<=i;j++)
        l[j]=0;
    for(j=1;j<=i;j++)
    {
        scanf("%d",&a);
        getchar();
        for(k=1;k<=a;k++)
        {
            scanf("%d",&b);
            getchar();
            l[j]+=b;
        }

    }
    for(j=1;j<=i-1;j++)
        printf("%d\n\n",l[j]);
    printf("%d\n",l[i]);

} 
