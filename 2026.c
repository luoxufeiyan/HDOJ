#include<stdio.h>
#include<string.h>
int main()
{
    char sen[100];
    int len,i;
    while(gets(sen))
    {
    len=strlen(sen);
    for(i=0;i<len;i++)
    {
        if(i==0)
        {
            sen[0]-=32;
        }
        if(sen[i]==' ')
        {
            sen[i+1]-=32;
        }
    }
    puts(sen);
    }
}
