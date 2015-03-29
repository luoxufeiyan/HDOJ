#include<stdio.h>
int main(){
    long a,b,n,i,func[100];
    while(scanf("%ld%ld%ld",&a,&b,&n) && a!=0){
        func[1]=func[2]=1;
        for(i=3;i<=48;i++)
            func[i]=(a*func[i-1]+b*func[i-2])%7;
        printf("%ld\n",func[(n>48)?n%48:n]);
    }
    return 0;
}
