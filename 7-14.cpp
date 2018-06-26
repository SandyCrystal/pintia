# include <stdio.h>
int main(void){
	char a[18];
	char b[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	int i,k,n,j,z,flag=0,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum=0;
		scanf("%s",a);
		for(j=0;j<17;j++){
			switch(j){
				case 0:k=7;break;
				case 1:k=9;break;
				case 2:k=10;break;
				case 3:k=5;break;
				case 4:k=8;break;
				case 5:k=4;break;
				case 6:k=2;break;
				case 7:k=1;break;
				case 8:k=6;break;
				case 9:k=3;break;
				case 10:k=7;break;
				case 11:k=9;break;
				case 12:k=10;break;
				case 13:k=5;break;
				case 14:k=8;break;
				case 15:k=4;break;
				case 16:k=2;break;
			}
			sum+=(a[j]-'0')*k;
		}
		z=sum%11;
		if(b[z]==a[17]){
			flag++;
		}
		else{
			printf("%s\n",a);
		}
	}
	if(flag==n){
		printf("All passed");
	}
	return 0;
}

