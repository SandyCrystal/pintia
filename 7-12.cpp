# include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b); 
int a[200005];
int b[200005];
int c[200005];
int main(void){
	int t,i,j,t1,t2,n,ans;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		b[0]=a[0];
		for(i=1;i<n;i++){
			b[i]=gcd(b[i-1],a[i]);
		}
		c[n-1]=a[n-1];
		for(i=n-2;i>=0;i--){
			c[i]=gcd(c[i+1],a[i]);
		}
		ans=0;
		if(n==0||n==1)printf("0\n");
		else if(n==2)printf("%d\n",max(a[0],a[1]));
		else{
			ans=max(b[n-2],c[1]);
			for(i=1;i<n-1;i++){
				ans=max(ans,gcd(b[i-1],c[i+1]));
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
int gcd(int a,int b) {
	if(a==0)return 0;
	if(b==0)return a;
	else return gcd(b,a%b);
}
