#include<stdio.h>
 main()
 {
    int a,b;
    scanf("%d %d",&a,&b);
    while(!(a==0&&b==0))
    {
    printf("%d\n",a+b);
     scanf("%d %d",&a,&b);
    }
 }
