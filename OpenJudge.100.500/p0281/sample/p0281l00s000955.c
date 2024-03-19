// Single_Sorce_Shotest_Path_1


#include <stdio.h>
#include <stdlib.h>


typedef struct{
	int distance;
	int vertex_n;
	int *box;
	int *omomi;
} DATA_T;


void Bfs(DATA_T *box, int n)
{
	int vertex, sub_vertex;
	int omomi;
	int ring_queue[10000];
	int front, rear;
	int i;

	box[0].distance = 0;
	front = rear = 0;
	ring_queue[rear++] = 0;
	while(front != rear){
		vertex = ring_queue[(front++) % 10000];

		for(i = 0; i < box[vertex].vertex_n; i++){
			sub_vertex = box[vertex].box[i];
			omomi = box[vertex].omomi[i];
			if(box[sub_vertex].distance == -1 ||  box[vertex].distance + omomi < box[sub_vertex].distance){
				box[sub_vertex].distance = box[vertex].distance + omomi;
				ring_queue[(rear++) % 10000] = sub_vertex;
			}
		}
	}
}


int main()
{
	DATA_T *box;
	int n, vertex, k;
	int sub_vertex, omomi;
	int i, j;

	scanf("%d", &n);

	box = (DATA_T *)malloc(sizeof(DATA_T) * n);

	for(i = 0; i < n; i++){
		scanf("%d %d", &vertex, &k);
		box[vertex].distance = -1;
		box[vertex].vertex_n = k;

		if(k){
			box[vertex].box = (int *)malloc(sizeof(int) * k);
			box[vertex].omomi = (int *)malloc(sizeof(int) * k);
			for(j = 0; j < k; j++){
				scanf("%d %d", &sub_vertex, &omomi);
				box[vertex].box[j] = sub_vertex;
				box[vertex].omomi[j] = omomi;
			}
		}
	}


	// 幅優先探索で最短経路を求める
	Bfs(box, n);


	// 表示
	for(i = 0; i < n; i++)
		printf("%d %d\n", i, box[i].distance);

	return 0;
}
