List Insert( List L, ElementType X ){
	PtrToNode p1,p2,p;
	int flag=0;
	p1=L->Next;
	p2=L;
	if(p1==NULL){
		p=(PtrToNode)malloc(sizeof(struct Node));
		p->Data=X;
		L->Next=p;
		return L;
	}
	while(p1){
		if(X<p1->Data){
			p=(PtrToNode)malloc(sizeof(struct Node));
			p->Data=X;
			p->Next=p1;
			p2->Next=p;
			flag=1;
			break;
		}
		p2=p1;
		p1=p1->Next;
	}
	if(flag==1)return L;
	else{
		p=(PtrToNode)malloc(sizeof(struct Node));;
		p->Data=X;
		p->Next=NULL;
		p2->Next=p;
		return L;
	}
}
