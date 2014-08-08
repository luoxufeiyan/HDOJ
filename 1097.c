#include<stdio.h>
int main()
{
    long a,b;
    int temp;
    while(scanf("%ld%ld",&a,&b)!=EOF)
    {
        a=a%10;
        b=(b>4)?b%4:b;
        if(b==0)
        {
            b=4;
        }
        for(temp=1;b>0;b--)
        {
            temp=temp*a;
        }
        printf("%d\n",temp%10);
    }
   return 0;
}
