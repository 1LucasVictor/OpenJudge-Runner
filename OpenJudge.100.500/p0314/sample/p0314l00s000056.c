#include<stdio.h>
#define max 10000
#define NIL -1

struct node{int p,l,r;};
struct node t[max];
int n;

void preparse(int u){
	if(u==NIL) return;
	printf(" %d",u);
	preparse(t[u].l);
	preparse(t[u].r);
}
void inparse(int u){
	if(u==NIL) return;
	inparse(t[u].l);
	printf(" %d",u);
	inparse(t[u].r);
}
void postparse(int u){
	if(u==NIL) return;
	postparse(t[u].l);
	postparse(t[u].r);
	printf(" %d",u);
}
int main(){
	int i,v,l,r,root;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		t[i].p=NIL;
	}
	for(i=0;i<n;i++){
		scanf("%d %d %d",&v,&l,&r);
		t[v].l=l;
		t[v].r=r;
		if(l!=NIL) t[l].p=v;
		if(r!=NIL) t[r].p=v;
	}
	for(i=0;i<n;i++) if(t[i].p==NIL) root=i;
	printf("Preorder\n");
	preparse(root);
	printf("\n");
	printf("Inorder\n");
	inparse(root);
	printf("\n");
	printf("Postorder\n");
	postparse(root);
	printf("\n");
	return 0;
}
