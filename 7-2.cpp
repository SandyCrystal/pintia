#include<bits/stdc++.h>
using namespace std;
#define LL long long

char a[100005];
LL len,Z,U,C;
LL sum = 0;

int main()
{
	scanf("%s",&a);
	len = strlen(a);
	for(LL i=0;i<len;i++)
		if(a[i]=='C')
			C++;
	
	for(LL i=0;i<len;i++)
	{
		if(a[i]=='Z')
			Z++;
		if(a[i]=='C')
			C--;
		if(a[i]=='U')
		{
			if(C%2==0)
				sum += C/2*(C-1)*Z;
			else
				sum += (C-1)/2*C*Z;
		}
	}
	cout<<sum<<endl;
}
