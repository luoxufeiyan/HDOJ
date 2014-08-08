#include <stdio.h>
int main()
{
    double a;
    while(scanf("%lf",&a)!=EOF)
    {
        if(a<0)
        {
        a*=-1;
         }
        printf("%.2lf\n",a);
     }
}
