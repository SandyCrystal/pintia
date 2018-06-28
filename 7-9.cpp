#include<bits/stdc++.h>
using namespace std;

int n,fuck = 0,shu,cc;
char a[100005],gg;

int main()
{
	scanf("%d",&n);
	getchar();
	gg = getchar();
	while(gg!='\n')\
	{
		a[fuck] = gg;
		fuck++;
		gg = getchar();
	}
	int len = strlen(a);
//	cout<<len<<endl;
	int chu = len/n;
//	cout<<chu<<endl;
	int yu = len%n;
//	cout<<yu<<endl;
	if(chu%2==1)
	{
		len += n-yu;
		for(int i=0;i<n-yu;i++)
		{
			a[fuck] = ' ';
			fuck++;
		}
	}
	int cnt = 1,shu = 1,cc = 0;
	for(int i=0;i<len;i++)
	{
		if(shu==1)
			printf("%c",a[i]);
		else
			printf("%c",a[n*(cnt-1)+cnt*n-1-i]);
		cc++;
		if(cc==n&&i!=len-1)
		{
			printf("\n");
			cc = 0;
			cnt++;
			shu = -shu;
		}
	}
}
