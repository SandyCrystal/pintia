# include <bits/stdc++.h>
using namespace std;
int main(void){
	int a,b,c,i,t;
	a=b=1;
	scanf("%d",&t);
	if(t==1||t==2){
		printf("1\n");
	}
	else{
		for(i=3;i<=t;i++){
			c=(a+b)%10;
			b=a;
			a=c;
		}
		printf("%d",c);
	}
	return 0;
}
