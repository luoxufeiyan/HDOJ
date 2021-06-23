#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

bool mp[17][17],vis[17];
int idx[5][5],idy[5][5];
char qp[5][6];
int n,link[17],p1,p2;

void Sd()
{
    int i,j,k;
    for(p1 = 0,i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            if(j == 1 || qp[i][j-1] == 'X') p1++;
            idx[i][j] = p1;
        }
    }

    for(p2 = 0,j = 1; j <= n; ++j)
    {
        for(i = 1; i <= n; ++i)
        {
            if(i == 1 || qp[i-1][j] == 'X') p2++;
            idy[i][j] = p2;
        }
    }

    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            if(qp[i][j] == '.') mp[idx[i][j]][idy[i][j]] = 1;
        }
    }

}

bool can(int p)
{
    int i;
    for(i = 0; i <= p2; ++i)
    {
        if(!vis[i] && mp[p][i])
        {
            vis[i] = true;
            if(link[i] == -1 || can(link[i]))
            {
                link[i] = p;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int i,j,cnt,sum;
    while(~scanf("%d",&n) && n)
    {
        cnt = 0;
        for(i = 1; i <= n; ++i)
            scanf("%s",qp[i]+1);
        memset(mp,0,sizeof(mp));

        Sd();

        memset(link,-1,sizeof(link));
        for(i = 0; i <= p1; ++i)
        {
            memset(vis,0,sizeof(vis));
            if(can(i)) cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}