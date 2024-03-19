#include <stdio.h>  
#include <string.h>
#define M 500000
#define NIL -1

typedef struct node_tbl
{
	int key,p,l,r;
} node;

node T[M+1];
int root=NIL;
int size=0;

void insert(int k){
	int y=NIL;
	int x=root;
	int z=size++;

	T[z].key=k;
	T[z].l=NIL;
	T[z].r=NIL;

	while (x!=NIL)
	{
		y=x;
		if (T[z].key<T[x].key) x=T[x].l;
		else                   x=T[x].r;
	}

	T[z].p=y;
	if (y==NIL) root=z;
	else{
		if (T[z].key<T[y].key)
			T[y].l=z;
		else
			T[y].r=z;
	}
}

void find(int u){
    int id,x=0;
    scanf("%d",&id);
    while(1){
        if(T[x].key==0){
            printf("no\n");
            break;
        }
        else if(T[x].key==id){
            printf("yes\n");
            break;
        }
        else if(id<T[x].key) x=T[x].l;
        else if(id>T[x].key) x=T[x].r;   
    }
}


void inorder(int u){
	if (u==NIL) return;
	inorder(T[u].l);
	printf(" %d", T[u].key);
	inorder(T[u].r);
}

void preorder(int u){
	if (u==NIL) return;
	printf(" %d", T[u].key);
	preorder(T[u].l);
	preorder(T[u].r);
}

int main(){
	char o[8];
	int n,x,i;
	scanf("%d", &n);
	
	for (i=0;i<n;i++){
		scanf("%s",o);
		if(!strcmp("insert",o)){
			scanf("%d",&x);
			insert(x);
        }
        else if(!strcmp("find",o)) find(root);
		else if(!strcmp("print",o)){
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
	}
	return 0;
}


