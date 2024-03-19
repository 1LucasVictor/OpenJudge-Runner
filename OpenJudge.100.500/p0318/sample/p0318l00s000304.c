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

int find(int u){
    int id,x=0;
    scanf("%d",&id);
    while(1){
        if(T[x].key==0){
            return NIL;
        }
        else if(T[x].key==id){
            return x;
        }
        else if(id<T[x].key) x=T[x].l;
        else if(id>T[x].key) x=T[x].r;   
    }
}

int Min(int x){
    while(T[x].l!=NIL) x=T[x].l;
    return x;
}

int Successor(int x){
    int y;
    if(T[x].r!=NIL) return Min(T[x].r);
    
    y=T[x].p;
    while(y!=NIL && x==T[y].r){
        x=y;
        y=T[y].p;
    }
    return y;
}


void delete(){
    int x,y,z;
    z=find(root);
    //printf("|%d|",z);
    
    if(T[z].l==NIL || T[z].r==NIL) y=z;
    else y=Successor(z);
    
    if(T[y].l!=NIL) x=T[y].l;
    else            x=T[y].r;
    
    if(x!=NIL)      T[x].p=T[y].p;
    
    if(T[y].p==NIL) root=x;
    else if(y==T[T[y].p].l) T[T[y].p].l=x;
    else if(y==T[T[y].p].r) T[T[y].p].r=x;

    if(y!=z) T[z].key=T[y].key;
    
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
        else if(!strcmp("find",o)){
            if(find(root)==NIL) printf("no\n");
            else                printf("yes\n");
            
        }
        else if(!strcmp("print",o)){
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
        else if(!strcmp("delete",o)) delete();
	}
	return 0;
}
