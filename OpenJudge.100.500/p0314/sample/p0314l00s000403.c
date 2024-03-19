#include<stdio.h>
#define MAX 30
#define NIL -1
struct node{
	int p,l,r;
}; 
struct node t[MAX];
void preOrder(int u){
	printf(" %d",u);
	if(t[u].l!=NIL)
	preOrder(t[u].l);
	if(t[u].r!=NIL)
	preOrder(t[u].r);
}
void inOrder(int u){
	if(t[u].l!=NIL)
	inOrder(t[u].l);
	printf(" %d",u);
	if(t[u].r!=NIL)
	inOrder(t[u].r);
}
void postOrder(int u){
	if(t[u].l!=NIL)
	postOrder(t[u].l);
	if(t[u].r!=NIL)
	postOrder(t[u].r);
	printf(" %d",u);
}
int main(){
	int i,j,n;
	for(i=0;i<MAX;i++){
		t[i].p=NIL;
		t[i].l=NIL;
		t[i].r=NIL;
	}//初始化
	scanf("%d",&n);
	int id[n+1];
	for(i=0;i<n;i++){
		scanf("%d",&id[i]);
		scanf("%d%d",&t[id[i]].l,&t[id[i]].r);
		if(t[id[i]].l+1)
		t[t[id[i]].l].p=id[i];
		if(t[id[i]].r+1)
		t[t[id[i]].r].p=id[i];
	}//输入
	for(i=0;i<n;i++){
		if(t[i].p==NIL)
		break;
	}
	printf("Preorder\n");
	preOrder(i);
	printf("\n");
	printf("Inorder\n");
	inOrder(i);
	printf("\n");
	printf("Postorder\n");
	postOrder(i);
	printf("\n");
	return 0;
} 
