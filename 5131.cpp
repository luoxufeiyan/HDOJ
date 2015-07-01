#include<algorithm>
#include<iostream>
#include<map>
#include<string.h>
using namespace std;
#define N 205

struct hero_t{
    string s;
    int i, n;
} heros[N];

struct node_t {
    int mmin, mmax;
    node_t() {}
    node_t(int a, int b) {
        mmin = a; mmax = b;
    }
} node;

bool comp(hero_t a, hero_t b) {
    if (a.n == b.n)
        return a.s < b.s;
    else
        return a.n > b.n;
}

int main() {
    int n, m;
    int i, j, k, id = 0;
    string s;
    node_t nd;
    
    while (cin>>n && n) {
        for (i=0; i<n; ++i) {
            heros[i].i = i;
            cin>>heros[i].s>>heros[i].n;
        }
        
        sort(heros, heros+n, comp);
        for (i=0; i<n; ++i)
            cout <<heros[i].s<<' '<<heros[i].n<<endl;
        
        map<string,node_t> tb;
        i = 0;
        while (i < n) {
            j = 1;
            while ((i+j)<n && heros[i+j].n == heros[i].n)
                ++j;
            if (j > 1) {
                for (k=0; k<j; ++k) {
                    tb[heros[i+k].s] = node_t(k+1, i+1);
                }
                i += j;
            } else {
                tb[heros[i].s] = node_t(1, i+1);
                ++i;
            }
        }
        cin >>m;
        while (m--) {
            cin >>s;
            nd = tb[s];
            if (nd.mmin == 1)
                cout <<nd.mmax<<endl;
            else
                cout <<nd.mmax<<' '<<nd.mmin<<endl;
        }
        id = 0;
    }
    
    return 0;
}
