#include<bits/stdc++.h>
using namespace std; 

int s,n,start,sum;
double tmp;
int a[50];
struct node
{
	char wxd;
	int next;
}p[100005];

int main()
{
	memset(a,0,sizeof(a));
	cin>>s>>n;
	while(n--)
	{
		cin>>start;
		getchar();
		cin>>p[start].wxd>>p[start].next;
	}
	
	while(p[s].next!=-1)
	{
		a[p[s].wxd-'A']++;
		s = p[s].next;
	}
	a[p[s].wxd-'A']++;
	
	sum = 0;
	for(int i=0;i<50;i++)
		sum += a[i];
	
	for(int i=0;i<50;i++)
		if(a[i]!=0)
		{
			tmp = 1.0*a[i]/sum*100;
			printf("%c %.2lf%%\n",i+'A',tmp);
		}
}
