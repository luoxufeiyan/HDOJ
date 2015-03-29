#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int cdy[1000001];
bool cmp(int a, int b)
{
    return a>b;
}
int main()
{
    int n, i,num;
    _int64 sum;
    scanf("%d", &n);
    while (n--)
    {
        sum = 0;
        scanf("%d", &num);
        for (i = 0; i<num; i++)
        {
            scanf("%d", &cdy[i]);
        }
        sort(cdy, cdy + i, cmp);
        for (i = 1; i<num; i++)
        {
            sum += cdy[i];
        }
        if (cdy[0]>sum+1)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}
