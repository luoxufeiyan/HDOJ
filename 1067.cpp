#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
#include<cstring>
using namespace std;
 
const int MOD = 1e6 + 7;
struct Point    {
    int ch[5][9];
    int x[4], y[4];
    int step;
};
bool vis[MOD];
int ha;
 
int get_hash(int c[5][9])   {
    int tmp[60], k = 0;
    for (int i=1; i<=4; ++i) {
        for (int j=2; j<=8; ++j) {
            tmp[k++] = c[i][j] % 10;
            tmp[k++] = c[i][j] / 10;
        }
    }
    int ret = 0;
    for (int i=0; i<k; ++i)  {
        ret = (ret * 7 % MOD + tmp[i]) % MOD;
    }
    ret = (ret & 0x7fffffff) % MOD;
    return ret;
}
 
int init(void)  {
    int res[5][9];
    int x[4] = {11, 21, 31, 41};
    for (int i=0; i<4; ++i)  {
        for (int j=1; j<=7; ++j) {
            res[i+1][j] = x[i]++;
        }
        res[i+1][8] = 0;
    }
    return get_hash (res);
}
 
void change(Point &v, int x0, int y0, int k)    {
    int a = v.ch[x0][y0-1] + 1;
    for (int i=1; i<=4; ++i) {
        for (int j=2; j<=8; ++j) {
            if (v.ch[i][j] == a)    {
                v.x[k] = i; v.y[k] = j;
                swap (v.ch[x0][y0], v.ch[i][j]);
                return ;
            }
        }
    }
}
 
int BFS(Point &p)   {
    memset (vis, false, sizeof (vis));
    int sh = get_hash (p.ch);
    vis[sh] = true;
    queue<Point> que;
    que.push (p);
    while (!que.empty ())   {
        Point u = que.front (); que.pop ();
        int uh = get_hash (u.ch);
        if (uh == ha)   {
            return u.step;
        }
        for (int i=0; i<4; ++i)  {
            int x = u.x[i], y = u.y[i];
            if (y == 1 || u.ch[x][y] % 10 == 7) continue;
            Point v = u;
            change (v, x, y, i);
            int vh = get_hash (v.ch);
            if (vis[vh])    continue;
            vis[vh] = true; v.step++;
            que.push (v);
        }
    }
 
    return -1;
}
 
int main(void)  {
    ha = init ();  
    int T;  scanf ("%d", &T);
    while (T--) {
        Point p;    p.step = 0;
        for (int i=1; i<=4; ++i) {
            p.ch[i][1] = 0;
        }
        for (int i=1; i<=4; ++i) {
            for (int j=2; j<=8; ++j) {
                scanf ("%d", &p.ch[i][j]);
            }
        }
        for (int i=1; i<=4; ++i) {
            for (int j=2; j<=8; ++j) {
                if (p.ch[i][j] == 11)   {
                    swap (p.ch[1][1], p.ch[i][j]);
                    p.x[0] = i; p.y[0] = j;
                }
                else if (p.ch[i][j] == 21)  {
                    swap (p.ch[2][1], p.ch[i][j]);
                    p.x[1] = i; p.y[1] = j;
                }
                else if (p.ch[i][j] == 31)  {
                    swap (p.ch[3][1], p.ch[i][j]);
                    p.x[2] = i; p.y[2] = j;
                }
                else if (p.ch[i][j] == 41)  {
                    swap (p.ch[4][1], p.ch[i][j]);
                    p.x[3] = i; p.y[3] = j;
                }
            }
        }
        int ans = BFS (p);
        printf ("%d\n", ans);
    }
 
    return 0;
}
