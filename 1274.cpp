#include<iostream>
#include<string>
#include<stack>
using namespace std;
string process(string s)
{
	string ans;
	stack<char> x;
	for(int i=0;i<s.size();++i)
	{
		if(s[i]>='0'&&s[i]<='9'||s[i]=='(')
			x.push(s[i]);
		else if(s[i]>='a'&&s[i]<='z')
		{
			if(x.top()<='9'&&x.top()>='0') 
			{
				int num=x.top()-'0';
				x.pop();
				while(num--)
					x.push(s[i]);
			}
			else               
				x.push(s[i]);
		}
		else if(s[i]==')')
		{
			string temp;
			while(x.top()!='(')
			{
				temp.insert(temp.begin(),x.top());
				x.pop();
			}
			x.pop();  
			int num;
			if(x.empty()||!(x.top()>='0'&&x.top()<='9'))
				num=1;
			else
			{
				num=x.top()-'0';
				x.pop();
			}
			while(num--)
			{
				for(int j=0;j<temp.size();++j)
					x.push(temp[j]);
			}
		}
	}
	while(!x.empty())
	{
		ans.insert(ans.begin(),x.top());
		x.pop();
	}
	return ans;
}
int main()
{
	int test;
	string s;
	cin>>test;
	while(test--)
	{
		cin>>s;
		cout<<process(s)<<endl;
	}
	return 0;
}
