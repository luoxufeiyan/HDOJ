#include<stdio.h>
#include<string.h>
int main()
{
    char list[100];
    int i,l,c,max=0;
    while(~scanf("%s",list))
    {
        c=0;
        max=0;
        l=strlen(list);
        max=list[0];
        for(i=1;i<l;i++)
        {
            if(list[i]>=max)
            {
                max=list[i];
            }

        }
        for (i = 0 ; list[i] ; i++)
        {
            putchar(list[i]);
            if (list[i] == max)
                printf("%s","(max)");
        }
        putchar('\n');
    }

    return 0;
}
