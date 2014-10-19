#include<stdio.h>
#include<math.h>
int main()
{
    int n;
 	double x1,y1,x2,y2,x3,y3;
  	double a,b,c,k,t;
	double area1,area2;
    while(~scanf("%d",&n))
    while(n--)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
        a=(y2-y1)/pow((x2-x1),2);
        b=-2*a*x1;
        c=y1-a*x1*x1-b*x1;
        k=(y3-y2)/(x3-x2);
        t=y3-k*x3;
        area1=1.0/3*a*pow(x3,3)+1.0/2*(b-k)*pow(x3,2)+(c-t)*x3;
        area2=1.0/3*a*pow(x2,3)+1.0/2*(b-k)*pow(x2,2)+(c-t)*x2;
        printf("%.2lf\n",area1-area2);
    }
    return 0;
}
