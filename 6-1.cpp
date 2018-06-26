List Delete( List L, ElementType minD, ElementType maxD ){
	int n,i,j,max,min;
	j=0;
	min=minD;
	max=maxD;
	int b[100000];
	for(i=0;i<=L->Last;i++){
		if(L->Data[i]<=min||L->Data[i]>=max){
			b[j]=L->Data[i];
			j++;
		}
	}
	for(i=0;i<j;i++)L->Data[i]=b[i];
	L->Last=j-1;
	return L;
}

