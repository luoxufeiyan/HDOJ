#include<stdio.h>
#include<string.h>
#define N 2000
int add(char *a,char *b,char *c);
int main()
{
    char a[N]={0},b[N]={0},c[N]={0};
    int k,n,i;
    while (scanf("%d",&n)!=EOF)
    {
        i=1;
        while (n)
        {
            scanf("%s%s",a,b);
        if (strlen(a)>=strlen(b))
            k=add(a,b,c);
        else
            k=add(b,a,c);
            while (c[k]=='0')
                k++;
        printf("Case %d:\n%s + %s = %s\n",i,a,b,c+k);
        if (n>1)
            printf("\n");
            i++;
        n--;
        }
    }
}
int add(char *a,char *b,char *c)
{
    int i,j,k,t;
    int tag=0;
    c[N-1]=0;
    for (i=strlen(a)-1,j=strlen(b)-1,k=N-2;i>=0&&j>=0;j--,i--,k--)
        {
            t=a[i]-'0'+b[j]-'0'+tag;
            c[k]=t%10+'0';
            tag=t/10;
        }
    while (i>=0)
    {
        c[k]=(a[i]-'0'+tag)%10+'0';
        tag=(a[i]-'0'+tag)/10;
        k--;
        i--;
    }
    c[k]=tag+'0';
    if (tag==0)
        k++;
    return k;
}
