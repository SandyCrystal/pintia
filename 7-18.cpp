# include <bits/stdc++.h>
using namespace std;
int main(void){
	int a,b,i,k,ma,mb;
	while(scanf("%d%d%d",&a,&b,&k)&&a!=0&&b!=0){
		ma=a;
		mb=b;
		for(i=0;i<k;i++){
			if(ma%10!=mb%10)break;
			ma/=10;
			mb/=10;
		}
		if(i==k)printf("-1\n");
		else printf("%d\n",a+b);
	}
	return 0;
}
