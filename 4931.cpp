#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int gus;
    scanf("%d", &gus);
    while (gus--)
    {
        int sum = 0, arr[11];
        for (int i = 0; i < 6; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        sort(arr, arr + 6);
        int ans = arr[5] + arr[4];
        sum -= (ans + arr[0]);
        printf("%s\n", ans > sum ? "Grandpa Shawn is the Winner!" : "What a sad story!");
    }
    return 0;
}
