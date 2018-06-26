# include <bits/stdc++.h>
using namespace std;
int main(void){
	int n1,n2,x;
	set<int>s,ss;
	scanf("%d",&n1);
	while(n1--){
		scanf("%d",&x);
		s.insert(x);
	}
	scanf("%d",&n2);
	while(n2--){
		scanf("%d",&x);
		if(s.count(x)!=0)ss.insert(x);
	}
	if(ss.empty())printf("No common element\n");
	else{
		bool flag=true;
		while(!ss.empty()){
			x=*ss.begin();
			printf(flag?"%d":" %d",x);
			ss.erase(*ss.begin());
			flag=false;
		}
	}
	return 0;
}
