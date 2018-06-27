#include<bits/stdc++.h>
using namespace std; 
#define LL long long

int n;
char a[99];
LL sum = 0,tmp = 1;

int main()
{
	cin>>n;
	while(n--)
	{
		cin>>a;
		if(a[0]=='f')
			tmp *= 2;
		tmp %= 100000007;
		if(a[0]=='p')
			sum += tmp;
		sum %= 100000007;
	}
	cout<<sum<<endl;
}
