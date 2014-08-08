#include<stdio.h>
int main()
{
    char a;
    int n,ni,num,num2;
    scanf("%d",&n);
    getchar();
    for(ni=0;ni<n;ni++)
    {
        scanf("%c%d%*c", &a, &num);
        if(a<97)
        {
            num2=a-'A'+1;
        }
        else
        {
            num2='a'-a-1;
        }
        printf("%d\n",num2+num);
    }
}
