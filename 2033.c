#include<stdio.h>
int main()
{
    double ah, am, as, bh, bm, bs, ch, cm, cs;
    int n;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%lf%lf%lf%lf%lf%lf", &ah, &am, &as, &bh, &bm, &bs);
         ch = cm = cs = 0;
         cs = as + bs;
         if (cs >= 60)
         {
             cm++;
             cs -= 60;
         }
         cm += am + bm;
         if (cm >= 60)
         {
             ch++;
             cm -= 60;
         }
         ch += ah + bh;
         printf("%.0lf %.0lf %.0lf\n", ch, cm, cs);
    }
}
