#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Room
{
    int j, f;
};

Room room[1005];

bool cmp(const Room a, const Room b)
{
    return ((double)a.j / a.f > (double)b.j / b.f);
}

int main()
{
    int m, n;
    while (cin >> m >> n && m!=-1 && n!=-1)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            cin >> room[i].j >> room[i].f;
        }
        sort(room , room + n, cmp);
        int jsum=0, fsum = 0;
        for (i = 0; i < n; i++)
        {
            fsum += room[i].f;
            jsum += room[i].j;
            if (fsum >= m) { break; }
        }
        cout << fixed << setprecision(3);
        if (fsum == m) { cout << (double)jsum << endl; }
        else if (fsum > m)
        {
            fsum -= room[i].f;
            jsum -= room[i].j;
            double javasum;
            javasum = jsum+(double)room[i].j *(double(m - fsum) / room[i].f);
            cout << javasum << endl;
        }
        else
        {
            cout << (double)jsum << endl;
        }
    }
    return 0;
}
