#include<bits/stdc++.h>
using namespace std;
#define LL long long

struct node
{
	char name[25];
	int score;
}p[10005];
int n;
int s,tmp;

bool cmp(struct node a,struct node b)
{
	if(a.score!=b.score)
		return a.score>b.score;
	else
	{
		int i = 0;
		while(a.name[i]==b.name[i])
			i++;
		return a.name[i]<b.name[i];
	};
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>p[i].name>>p[i].score;
	sort(p,p+n,cmp);
	s = 1;
	tmp = 1;
	cout<<s<<" "<<p[0].name<<endl;
	for(int i=1;i<n;i++)
	{
		if(p[i-1].score!=p[i].score)
		{
			s += tmp;
			cout<<s<<" ";
			tmp = 1;
		}
		else
		{
			cout<<s<<" ";
			tmp++;
		}
		cout<<p[i].name<<endl;
	}
}
