# include <stdio.h>
int main(){
	int x,i=1,s,k=1; 
	scanf("%d",&x);
	if(x%2!=0&&x%5!=0&&x<1000){
		do{
			if(x<=k){
				break;
			}
			i++;
			k=k*10+1;
		}while(1);
		do{
			s=k/x;
			printf("%d",s);
			if(k%x==0){
				break;
			}
			k=k%x*10+1;
			i++;
		}while(1);		
		printf(" %d",i);		
	}
	return 0;
}
