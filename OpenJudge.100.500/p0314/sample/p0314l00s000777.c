#include<stdio.h>
#define N 25

typedef struct{
	int left,right;
}Node;

Node T[N];

int check(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]==0)return 0;
	}
	return 1;
} 

void searchRoot(int v[],int id){
	if(id==-1)return;
	v[id]=1;
	searchRoot(v,T[id].left);
	searchRoot(v,T[id].right);
}

void preorder(int u){
	if(u==-1)return;
	printf(" %d",u);
	preorder(T[u].left);
	preorder(T[u].right);
}

void inorder(int u){
	if(u==-1)return;
	inorder(T[u].left);
	printf(" %d",u);
	inorder(T[u].right);
}

void Postorder(int u){
	if(u==-1)return;
	Postorder(T[u].left);
	Postorder(T[u].right);
	printf(" %d",u);
}


int main(void){
	int i,n,id,l,r;
	int root;
	int visit[N];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&id,&l,&r);
		T[id].left=l;
		T[id].right=r;
		visit[id]=0;
	}
	
	for(i=0;i<n;i++){
		searchRoot(visit,i);
		if(check(visit,n)==1){
			root=i;
			break;
		}
	}
	
	printf("Preorder\n");
	preorder(root);
	printf("\n");
	printf("Inorder\n");
	inorder(root);
	printf("\n");
	printf("Postorder\n");
	Postorder(root);
	printf("\n");
	return 0;
}