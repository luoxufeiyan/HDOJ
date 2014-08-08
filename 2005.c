#include<stdio.h>
int main()
{
    int y,m,d,sum;
    while(~scanf("%d/%d/%d",&y,&m,&d))
    {
        sum=0;
        switch(m)
        {
        case 12:sum+=30;
        case 11:sum+=31;
        case 10:sum+=30;
        case 9:sum+=31;
        case 8:sum+=31;
        case 7:sum+=30;
        case 6:sum+=31;
        case 5:sum+=30;
        case 4:sum+=31;
        case 3:if((y%4==0)&&((y%100)!=0)||(y%400==0))
                   sum+=29;
                   else
                   sum+=28;
        case 2:sum+=31;
        case 1:sum+=d;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
  
