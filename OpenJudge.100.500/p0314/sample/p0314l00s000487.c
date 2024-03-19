#include<stdio.h>
#define MAXN 1000+5
#define INF -1
struct node
{
	int r,l,p;
}T[MAXN];
void began(int u)
{
	if(u==INF)return;
	printf(" %d",u);
	began(T[u].l);
	began(T[u].r);
}
void middle(int u)
{
	if(u==INF)return;
	middle(T[u].l);
	printf(" %d",u);
	middle(T[u].r);
}
void endl(int u)
{
	if(u==INF)return;
	endl(T[u].l);
	endl(T[u].r);
	printf(" %d",u);
}
int main()
{
	int N,root;
	scanf("%d",&N);
	int i,v,R,L;
	for(i=0;i<N;i++)
	{
		T[i].l=INF;
		T[i].p=INF;
		T[i].r=INF;	
	} 
	for(i=0;i<N;i++)
	{
		scanf("%d%d%d",&v,&L,&R);
		T[v].l=L;
		T[v].r=R;
		if(L!=INF)T[L].p=v;
		if(R!=INF)T[R].p=v; 
	}
	for(i=0;i<N;i++)if(T[i].p==INF)root=i;
	printf("Preorder\n");
	began(root);
	printf("\n");
	printf("Inorder\n");
	middle(root);
	printf("\n");
	printf("Postorder\n");
	endl(root);
	printf("\n");
	return 0;
	return 0;
} 
