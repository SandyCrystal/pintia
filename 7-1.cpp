#include<bits/stdc++.h>
using namespace std;

int n,len;
char a[10005];

int main()
{
	cin>>n;
	getchar();
	memset(a,0,sizeof(a));
	while(n--)
	{
		scanf("%s",&a);
		len = strlen(a);
		int i;
		for(i=7;i<len;i++)
		{
			if(a[i]=='/'||a[i]==':')
				break;
			printf("%c",a[i]);
		}
		if(a[i]=='/')
			printf(" 80 ");
		else
		{
			printf(" ");
			for(i=i+1;i<len;i++)
			{
				if(a[i]=='/')
					break;
				printf("%c",a[i]);
			}
			printf(" ");
		}
		for(i;i<len;i++)
			printf("%c",a[i]);
		printf("\n");
	}
}
