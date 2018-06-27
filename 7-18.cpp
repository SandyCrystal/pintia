# include <bits/stdc++.h>
using namespace std;
int main(void){
	int m,n,i,j,sum=0,x;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&x);
			if(i!=0&&i!=m-1&&j!=0&&j!=n-1)sum+=x;
		}
	} 
	printf("%d\n",sum);
	return 0;
}
