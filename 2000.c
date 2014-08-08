#include<stdio.h>
main()
{
 char a,b,c,d;
 while(scanf("%c %c %c",&a,&b,&c)!=EOF)
 {
     getchar();
  if(a>=b)
  {
   if(c>=a)
   printf("%c %c %c\n",b,a,c);
   else if(b>=c)
   printf("%c %c %c\n",c,b,a);
   else if(b<c)
   printf("%c %c %c\n",b,c,a);
  }
  else 
  {
   if(c>=b)
   printf("%c %c %c\n",a,b,c);
   else if(c>=a)
   printf("%c %c %c\n",a,c,b);
   else if(a>c)
   printf("%c %c %c\n",c,a,b);
  }
 }
}
