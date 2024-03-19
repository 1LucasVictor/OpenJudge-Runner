#include<stdio.h>
#define M 10000
#define N -1

struct Node{int p,l,r;};
struct Node T[M];
int n;

void preParse(int u){
if(u==N)return;
printf(" %d",u);
preParse(T[u].l);
preParse(T[u].r);
}

void inParse(int u){
	if(u==N)return;
	inParse(T[u].l);
	printf(" %d",u);
	inParse(T[u].r);
}

void postParse(int u){
	if(u==N)return;
	postParse(T[u].l);
	postParse(T[u].r);
	printf(" %d",u);
}
int main(){
	int i,v,l,r,root;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	T[i].p=N;
	}
	
	for(i=0;i<n;i++){
		scanf("%d %d %d",&v,&l,&r);
		T[v].l=l;
		T[v].r=r;
		if(l!=N)T[l].p=v;
		if(r!=N)T[r].p=v;
	}
	for(i=0;i<n;i++)if(T[i].p==N) root = i;
	
	printf("Preorder\n");
	preParse(root);
	printf("\n");
	printf("Inorder\n");
	inParse(root);
	printf("\n");
	printf("Postorder\n");
	postParse(root);
	printf("\n");
	
	return 0;
}
	
