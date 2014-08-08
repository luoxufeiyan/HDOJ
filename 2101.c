#include<stdio.h>
main()
{
int a,b;
while(scanf("%d%d",&a,&b)!=EOF)
{
    if((a+b)%86==0)
        printf("yes\n");
    else
        printf("no\n");
}
}//这道题要怎样才能WA
