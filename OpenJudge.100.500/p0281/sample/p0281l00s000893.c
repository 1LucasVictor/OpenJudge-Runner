#include<stdio.h>

#define S 100

typedef struct COST{
	int cost;
	int nodenum;
}Cost;
 
int graph[S][S];
int n;
int cost[S];
Cost heap[S]; //minimum heap.
int N;  //number of elements in heap.

void setCost(Cost *dst, const Cost *src){
	dst->cost = src->cost;
	dst->nodenum = src->nodenum;
	return;
}
 
//e1->cost < e2->cost:-1
//e1->cost == e2->cost:0
//e1->cost > e2->cost:1
int cmpCost(Cost *e1, Cost *e2){
	return (e1->cost < e2->cost?-1:0) + (e1->cost > e2->cost?1:0);
}
 
void swapCost(Cost *e1, Cost *e2){
	int temp;
	temp = e1->cost; e1->cost = e2->cost; e2->cost = temp;
	temp = e1->nodenum; e1->nodenum = e2->nodenum; e2->nodenum = temp;
	return;
}
 
void up(int i){
	if( i <= 1 ){ return; }
	if( cmpCost(&heap[i], &heap[i/2]) == -1 ){
		swapCost(&heap[i], &heap[i/2]);
		up(i/2);
	}
	return;
}
 
void down(int i){
	int j;
	if( 2*i > N ){ return; }
	if( cmpCost(&heap[2*i], &heap[2*i+1]) == -1 ){
		j = 2*i;
	}else{
		j = 2*i+1;
	}
	if( cmpCost(&heap[i], &heap[j]) == 1 ){
		swapCost(&heap[i], &heap[j]);
		down(j);
	}
	return;
}
 
void delete(int i){
	if( i < 1 ){ return; }
	heap[i] = heap[N];
	N--;
	down(i);
	return;
}

int isInCost(int num){
	int i;
	for( i = 0; i < N; i++ ){
		if( heap[i].nodenum == num ){ return i; }
	}
	return -1;
}

void add(Cost *e){
	int re;
	if( (re = isInCost(e->nodenum)) >= 0 ){
		if( heap[re].cost < e->cost ){ return; }
		delete(re);
	}
	N++;
	setCost(&heap[N], e);
	up(N);
	return;
}
 
void init(){
	int i, j;
	for( i = 0; i < S; i++ ){
		cost[i] = -1;
		for( j = 0; j < S; j++ ){ graph[i][j] = -1; }
	}
}

void input(){
	int i, j;
	int u, k, v, c;
	scanf("%d", &n);
	for( i = 0; i < n; i++ ){
		scanf("%d %d", &u, &k);
		for( j = 0; j < k; j++ ){
			scanf("%d %d", &v, &c);
			graph[u][v] = c;
		}
	}
}

int getMinCost(int start){
	int i, j;
	Cost c, next;
	next.cost = 0;
	next.nodenum = start;
	add(&next);
	while( N > 0 ){
		setCost(&c, &heap[1]);
		delete(1);
		i = c.nodenum;
		for( j = 0; j < n; j++ ){
			if( graph[i][j] < 0 ){ continue; }
			next.cost = c.cost + graph[i][j];
			next.nodenum = j;
			if( cost[j] != -1 && cost[j] < next.cost ){ continue; }
			cost[j] = next.cost;
			add(&next);
		}
	}
	return 0;
}

void get(int s){
	cost[s] = 0;
	getMinCost(s);
}

void print(){
	int i;
	for( i = 0; i < n; i++ ){ printf("%d %d\n", i, cost[i]); }
	return;
}

int main(){
	init();
	input();
	get(0);
	print();
	return 0;
}