#include<stdio.h>
int main()
{
    int a,b,c,flag=0;

    scanf("%d%d%d",&a,&b,&c);
    if(a<=168)
        printf("CRASH %d\n",a),flag=1;
    if(flag==0&&b<=168)
        printf("CRASH %d\n",b),flag=1;
    if(flag==0&&c<=168)
        printf("CRASH %d\n",c),flag=1;
    if(flag==0)
        printf("NO CRASH\n");
    return 0;
}
