#include <stdio.h>
#include <limits.h>
#define max_n 100

int n;
int AdjWeight[max_n][max_n];
int d[max_n];
int edge[max_n];
int parent[max_n];
int visited[max_n];

void relax(int, int);
void initialize(int);
void shortestPath(int);

int main(){
	int from, to;
	int i, j;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%d %d", &from, &edge[i]);
		for (j = 0; j < edge[i]; j++){
			int tempWeight;
			scanf("%d %d", &to, &tempWeight);
			AdjWeight[from][to] = tempWeight;
		}
	}
	shortestPath(0);
	
	for (i = 0; i < n; i++){
		printf("%d %d\n", i, d[i]);
	}
	return 0;
}

void initialize(int from){
	int i;
	for (i = 0; i < n; i++){
		d[i] = INT_MAX;
		parent[i] = -1;
	}
	d[from] = 0;
}

void relax(int linkFrom, int linkTo){
	if(visited[linkTo] == 0 && d[linkTo] > d[linkFrom] + AdjWeight[linkFrom][linkTo]){
		d[linkTo] = d[linkFrom] + AdjWeight[linkFrom][linkTo];
		parent[linkTo] = linkFrom;
	}
}

int minWeight(){
	int i;
	int min = INT_MAX;
	int anchor = -1;
	
	for (i = 0; i < n; i++){
		if(visited[i] == 0 && d[i] < min){
			min = d[i];
			anchor = i;
		}
	}
	return anchor;
}

void shortestPath(int from){
	initialize(from);
	int j;
	
	while(1){
		int anchor = minWeight();
		if (anchor == -1) break;
		visited[anchor] = 1;
		
		for (j = 0; j < n; j++){
			if (AdjWeight[anchor][j] != 0) relax(anchor, j); //if (visited[j] != 1) 
		}
	}
}
