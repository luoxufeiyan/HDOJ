#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j,max,a[1010];
    char s[1010][16];
    while(scanf("%d",&n) && n!=0){
        for(i=1;i<=n;i++)
            scanf("%s",s[i]);
        for(i=1,max=0;i<=n;i++){
            for(j=i+1,a[i]=0;j<=n;j++){
                if(strcmp(s[i],s[j])==0)
                    a[i]++;
            }
            if(a[i]>max)
                max=a[i];
        }
        for(i=1;i<=n;i++)
            if(a[i]==max)
                puts(s[i]);
    }
    return 0;
}
