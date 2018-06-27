# include <bits/stdc++.h>
using namespace std;
char a[500005];
char b[500005];
int main(void){
	int i,j,k,l;
	i=0;
	while((a[i++]=getchar())!='\n') ;
	i--;
	for(j=0;j<i;j++)if(a[j]!=' ')break;
	for(k=i-1;k>=0;k--)if(a[k]!=' '){
		break;
	}
	for(i=j,l=0;i<=k;i++){
		if(a[i]!=' ')b[l++]=a[i];
		else if(a[i-1]!=' ')b[l++]=a[i];
	}
	b[l]=' ';
	for(i=l-1;i>=0;i--){
		if(b[i]==' '){
			for(j=i+1;b[j]!=' ';j++)printf("%c",b[j]);
			printf(" ");
		}
		if(i==0){
			for(j=i;b[j]!=' ';j++)printf("%c",b[j]);
		}
	}
	printf("\n");
	return 0;
}
