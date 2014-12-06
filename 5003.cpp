#include<stdio.h>
2.#include<cstring>
3.#include <algorithm>
4.#include<cmath>
5.#include<cstdio>
6.using namespace std;
7.double ai[100];
8.int main(){
9.	int n, i, j, cas;
10.	double res;
11.	scanf("%d",&cas);
12.	while (cas--){
13.		scanf("%d", &n);
14.		res = 0;
15.		for (i = 0; i<n; i++){
16.			scanf("%lf",&ai[i]);
17.		}
18.		sort(ai, ai + n);
19.		for (i = n - 1; i >= 0; i--){
20.			res += pow(0.95, n - 1 - i)*ai[i];
21.		}
22.		printf("%.10lf\n", res);
23.	}
24.	return 0;
25.}
