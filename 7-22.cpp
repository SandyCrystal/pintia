#include<bits/stdc++.h>
using namespace std;

int n,a,b;

int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		if(a==b)
		{
			if(a%2==0)
				printf("%d\n",a*2);
			else
				printf("%d\n",a*2-1);
		}
		else if(a==b+2)
		{
			if(a%2==0)
				printf("%d\n",a*2-2);
			else
				printf("%d\n",a*2-3);
		}
		else
			printf("No Number\n");
	}
}
