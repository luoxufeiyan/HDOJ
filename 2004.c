#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n>100||n<0)
        {
            printf("Score is error!\n");
        }
        else
        {
            if(n>=90)
            {
                printf("A\n");
            }
            else
            {
                if(n>=80)
                {
                    printf("B\n");
                }
                else
                {
                    if(n>=70)
                    {
                        printf("C\n");
                    }
                    else
                    {
                        if(n>=60)
                        {
                            printf("D\n");
                        }
                        else
                        {
                            printf("E\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
