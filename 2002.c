#include<stdio.h>
#define PI 3.1415927
 void main()
{
    double r,v;
    while(scanf("%lf",&r)!=EOF)
    {
    r=r*r*r;
    v=(float)4/(float)3;
    v=v*r*PI;
    printf("%.3f\n",v);
    }
 }
