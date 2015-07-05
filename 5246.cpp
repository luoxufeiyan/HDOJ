#include<stdio.h>
#include<algorithm>
using namespace std;
long long a[10010];
int main()
{
    int T,i,add=1;
    long long n,k,m,bxd,temp;
    scanf("%d",&T);
    while(T--)
    {
        memset(a,0,sizeof(a));
        scanf("%lld%lld%lld",&n,&m,&k);
        for(i=1;i<=n;i++)
          scanf("%lld",&a[i]);
        sort(a+1,a+n+1);
        for(i=1;i<=n;i++)
         {
         if(a[i]>m) {bxd=a[i-1];temp=i;break;}
         }
        printf("Case #%d:\n",add);
        if(m>=a[n]) {printf("why am I so diao?\n");goto p;}
        if(m<a[1]) {printf("madan!\n");goto p;} 
        for(i=temp;i<=n;i++)
          {
          
          if(bxd+k>=a[i]&&bxd+k<a[i+1]) {bxd=a[i];k--;}
          }
        if(bxd+k>=a[n]) {printf("why am I so diao?\n");}
        else printf("madan!\n");
        p:add++;
         
         
    }
    return 0;
}