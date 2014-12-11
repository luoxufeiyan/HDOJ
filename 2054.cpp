#include<iostream>
#include<cstring>
using namespace std;
char a[100000], b[100000];
bool is(char *p)
{
	for (; *p != '\0'; p++)
	if (*p == '.')return true;
	return false;
}

void det(char *p)
{
	for (; *p != '\0'; p++);
	p--;
	for (; *p == '0'; p--)
		*p = '\0';
	if (*p == '.')*p = '\0';
}

int main()
{
	while (cin >> a >> b)
	{
		if (is(a))det(a);
		if (is(b))det(b);
		if (strcmp(a, b) == 0)cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
