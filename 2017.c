#include <stdio.h>
int main()
{
    int n,i,sum;
    char num[1000];
    scanf("%d",&n);
    while(n--)
    {
        i=sum=0;
        scanf("%s",num);
        while(num[i])
        {
            if(num[i]>='0'&&num[i]<='9')
                sum++;
            i++;
        }
        printf("%d\n",sum);
    }
    return 0;    
}
