#include <stdio.h>
#include <string.h>
#define MOD 100000
int main()
{
    int a[8000];    
	int i,k,n,t,la;
    while(EOF !=scanf("%d",&n))
    {
        if(n==0||n==1) {printf("1\n");continue;}

        a[0] = 1; 
        la = 1;
        t=0;
        for(k=2; k<=n; k++)
        {
            for(i=0; i<la; i++)
            {
                t += k * a[i];
                a[i] = t%MOD;
                t = t/MOD;
            }
            if (t > 0)   
            {    
                a[la++] = t;    
                t = 0; 
            } 
        }
        printf("%d",a[la-1]);
        for(i=la-2; i>=0; i--)
            printf("%05d",a[i]);
        printf("\n");
    }
    return 0;
}