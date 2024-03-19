#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct aaa{
	struct aaa *next; 
	int v;//ikisaki
	int w;
} slobj;

slobj *new_slobj(int iki,int omomi){
slobj *y = (slobj *)malloc(sizeof(slobj));
y->next=NULL;
y->v=iki;
y->w=omomi;
return y;
}


typedef struct{
	slobj *head; 
} slist;

slist *slist_new(void){
slist *s;
s=(slist *)malloc(sizeof(slist));
return s;
}


typedef struct {
int ten;
int eda;
slist **E;
}graph;

graph *new_graph(int t,int e){
graph *G;
int i;
G=(graph *)malloc(sizeof(graph));
G->ten=t;
G->eda=e;
slist **sl = (slist **)malloc((t+1)*sizeof(slist *)); 
for (i=0; i<=t; i++) {
	sl[i]=slist_new();		
}

G->E=sl;//ireru
return G;
}


typedef struct {
	int dis;
	int ikisaki;
} heapdata;

typedef struct {
	int max_size; // 配列 A に格納できる最大要素数
	int size; // ヒープに格納されている要素の数
	heapdata **A; // 要素を格納する配列
} heap;



graph *graph_imput(graph *G,slobj *sl,int n){
//n is shiten
slist *r=G->E[n];
slobj *a=r->head;
sl->next=a;
r->head=sl;
}



void heap_insert(heap *H,slobj *a, int *dist,int k){

H->size=H->size+1;
heapdata **z=H->A;
//heapdata *u;
z[H->size]->ikisaki=a->v;
z[H->size]->dis=dist[k]+a->w;

}

void heap_sort(heap *H);


void heap_swap(heap *H,int a,int b){
    heapdata **A,*cc;
    A=H->A;
    cc=A[b];
    A[b]=A[a];
    A[a]=cc;

}


void heapify(heap *H, int i);

int *dij(graph *G,int s){
	int edasu=G->eda , ten=G->ten;
	int *dist;
	dist=(int *)malloc((ten+1)*sizeof(int));
	dist[1]=0;
	int kk;
	for(kk=2;kk<ten+1;kk++){
		dist[kk]=-99999;
	}//dist syokika
	heap *H;

	H = (heap *)malloc(sizeof(heap));
	heapdata **hd;
	hd= (heapdata **)malloc((edasu+1)*sizeof(heapdata *));//tuika
	for (kk=0;kk<edasu+1;kk++){
		hd[kk]=(heapdata *)malloc(sizeof(heapdata));
	}
	H->max_size=edasu;
	H->size=0;
	H->A=hd;// heap syokika
	
	int k=s,q;
	for(q=0;q<ten-1;q++){//koko
	slist *sl=G->E[k];
		if(sl->head!=NULL){
			slobj *a=sl->head;
			heap_insert(H,a,dist,k);		
			while(a->next!=NULL){
				a=a->next;
				heap_insert(H,a,dist,k);		
			}		
		}
	heapdata **mm;
	
	mm=H->A;
	int l=1;

	int n=H->size ;
	//heapdata **A=H->A ;
	int i;
	for (i = n/2; i >= 1; i--) {
		heapify(H,i);
	}
	
	while(1){

		if(mm[1]->dis > dist[mm[1]->ikisaki]){
		dist[mm[1]->ikisaki]=mm[1]->dis;
		k=mm[1]->ikisaki;
		heap_swap(H, 1,H->size);	
		H->size=H->size-1;		
		break;	
		}
		else{		
		heap_swap(H, 1,H->size);
    		H->size=H->size-1;
    		heapify(H,1);
		}
	}

	//k=mm[1]->ikisaki;
	}
return dist;
}



//heap mijissou

void heapify(heap *H, int i){
	int l, r, largest, size;
	heapdata **A;
	A = H->A; 
	size = H->size;
	l = 2*i;
	r = 2*i+1;
	if (l <= size && A[l]->dis > A[i]->dis) largest = l; // A[i] と左の子で大きい
	else largest = i; // 方をlargestに
	if (r <= size && A[r]->dis > A[largest]->dis) // 右の子の方が大きい
	largest = r;
	if (largest != i) {
		heap_swap(H, i, largest); // A[i]を子供と入れ替える
		heapify(H, largest);
	}
}
void heap_sort(heap *H){
	int i;

	int n=H->size ;
	heapdata **A=H->A ;
	for (i = n/2; i >= 1; i--) {
		heapify(H,i);
	}
	int k;
	for( k=1;k<=n;k++){
		heap_swap(H, 1,H->size);
    		H->size=H->size-1;
    		heapify(H,1);
	}
}





int main(void){
int ten,eda;
scanf("%d",&ten);
eda=1000;
graph *G=new_graph(ten,eda);

int k,g;
int w;
for(k=0;k<ten;k++){
int n;
scanf("%d %d",&k,&n);
int j;
for(j=0;j<n;j++){
scanf("%d %d",&g ,&w);
slobj *y;
y=new_slobj(g+1,-w);
graph_imput(G,y,k+1);
}
}
int *dist= dij(G,1);
for(k=0;k<ten;k++){
printf("%d %d\n",k,-dist[k+1]);
}

return 0;
}