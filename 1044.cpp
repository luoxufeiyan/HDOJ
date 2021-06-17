// http://acm.hdu.edu.cn/discuss/problem/post/reply.php?postid=40530&messageid=1&deep=0
//500ms
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
const int maxn = 55;
struct info{
	int x,y,k;
	int step,cost;
};
char map[maxn][maxn];
bool visited[maxn][maxn][1025];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
int s[12];
int m,n,t,sum;
queue<info>q;
void clear_set()
{
	memset(visited,false,sizeof(visited));
	memset(s,0,sizeof(s));
	while(!q.empty()){
		q.pop();
	}
}
inline bool check(int x,int y,int k)
{
	if(x < 0 || x >= n || y < 0 || y >= m){
		return true;
	} 
	if(map[x][y] == '*'){
		return true;
	}
	return false;
}
int bfs()
{
	info ptr,p;
	int cnt = -1;
	while(!q.empty()){
		ptr = q.front();
		q.pop();
		if(ptr.step > t){
			break;
		}
		if(map[ptr.x][ptr.y] == '<'){
			cnt = max(ptr.cost,cnt);
		}
		for(int i = 0;i < 4;i++){
			memcpy(&p,&ptr,sizeof(info)); 
			p.x = ptr.x + dx[i];
			p.y = ptr.y + dy[i];
			if(check(p.x,p.y,p.k)){
				continue;
			}
			p.step = ptr.step + 1;
			if(map[p.x][p.y] >= 'A' && map[p.x][p.y] <= 'J'){
				int sum = map[p.x][p.y] - 'A';
				if((p.k&(1<<sum))== 0){   //没有这句话会错
					p.cost += s[sum];
					p.k = p.k|(1<<sum);
				}
			}
			if(visited[p.x][p.y][p.k] == false){
				visited[p.x][p.y][p.k] = true;
				q.push(p);
			}
		}
	}
	return cnt;
}
int main()
{
	int cnt;
	scanf("%d",&cnt);
	for(int k = 1;k <= cnt;k++){
		clear_set(); 
		scanf("%d%d%d%d",&m,&n,&t,&sum);
		for(int i = 0;i < sum;i++){
			scanf("%d",&s[i]);
		}
		info p;
		for(int i = 0;i < n;i++){
			scanf("%s",map[i]);
			for(int j = 0;j < m;j++){
				if(map[i][j] == '@'){
					p.x = i;p.y = j;
				}
			}
		}
		p.cost = 0;p.step = 0;p.k = 0;
		visited[p.x][p.y][p.k] = true;
		q.push(p);
		int ans = bfs();
		printf("Case %d:\n",k);
		if(ans == -1){
			printf("Impossible\n");
		}
		else{
			printf("The best score is %d.\n",ans);
		}
		if(k != cnt){
			printf("\n");
		}
	}
	return 0;
}