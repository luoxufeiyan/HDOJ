#include<stdio.h>
#define M 1000
void main()
{ 
    int a ,b,n,j[M],i;
    //printf("input n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        //printf("%d %d",a,b);
        j[i]=a+b;
    }
    i=0;  
    while(i<n)
    {
        printf("%d",j[i]);    
        i++;
        printf("\n");
    }
}    
