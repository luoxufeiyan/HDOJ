#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int n,m;
int score[52][52];
int mus[102][52];
int note[102];
int ans;

void DP()
{
  memset(mus,0,sizeof(mus));
  for(int i=2;i<=n;i++)
  {
    if(note[i]>0)
    {
      if(note[i-1]>0)
        mus[i][note[i]]=mus[i-1][note[i-1]]+score[note[i-1]][note[i]];
      else
      {
        for(int j=1;j<=m;j++)
          mus[i][note[i]]=max(mus[i][note[i]],mus[i-1][j]+score[j][note[i]]);
      }
    }
    else
    {
      if(note[i-1]>0)
      {
        for(int j=1;j<=m;j++)
          mus[i][j]=max(mus[i][j],mus[i-1][note[i-1]]+score[note[i-1]][j]);
      }
      else
      {
        for(int j=1;j<=m;j++)
          for(int k=1;k<=m;k++)
          mus[i][j]=max(mus[i][j],mus[i-1][k]+score[k][j]);
      }
    }
  }
  ans=-1;
  if(note[n]>0)
    ans=mus[n][note[n]];
  else
  {
    for(int j=1;j<=m;j++)
    {
      if(ans<mus[n][j])
        ans=mus[n][j];
    }
  }
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    for(int i=1;i<=m;i++)
      for(int j=1;j<=m;j++)
      cin>>score[i][j];
    for(int i=1;i<=n;i++)
      cin>>note[i];
    DP();
    cout<<ans<<endl;
  }
  return 0;
}
