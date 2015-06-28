#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
const int M = 5000;
using namespace std;

struct node{
	int num;
	bool operator < (const node &a) const{ //ÔËËã·û<ÖØÔØ 
		return num > a.num;
	}
};

bool cmp(char a, char b){
	return a > b;
}

int main(){
	string s;
	while(cin >> s, s != "END"){
		priority_queue<node> q;
		sort(s.begin(), s.end(), cmp);
		int i, count = 1;
		node qq; 
		for(i = 1; i < s.size(); ++ i){
			if(s[i] == s[i-1]){
				++count;
			}
			else{
				qq.num = count;
				q.push(qq); count = 1;
			}
		}
		qq.num = count;
		q.push(qq);
		int sum = 0;
		if(q.size() == 1){
			sum = q.top().num;
		}
		else
		{
			while(q.size() > 1){
				node temp1 = q.top(); q.pop();
				node temp2 = q.top(); q.pop();
				node temp; temp.num = temp1.num+temp2.num;
				sum += temp.num;
				q.push(temp);
			}
		}
		double temp = (s.size()*8+0.0)/(sum+0.0);
		printf("%d %d %.1lf\n", s.size()*8, sum, temp);
	}
	return 0;
}
