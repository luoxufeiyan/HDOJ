#include<stdio.h>
#include<math.h>
int main()
{
    double mm[200][200],fmax;
    int x,y,m,n,fm,fn;
    while(~scanf("%d%d",&x,&y))
    {
        for(n=1;n<=x;n++)
        {
            for(m=1;m<=y;m++)
            {
                scanf("%lf",&mm[m][n]);
            }
        }
    fmax=fabs(mm[1][1]);
    fm=fn=1;
    for(n=1;n<=x;n++)
        {
            for(m=1;m<=y;m++)
            {
                if(fabs(mm[m][n])>fabs(fmax))
                {
                    fm=m;
                    fn=n;
                    fmax=mm[m][n];
                }
            }
        }
    printf("%d %d %.0lf\n",fn,fm,fmax);
    }
    return 0;
}
