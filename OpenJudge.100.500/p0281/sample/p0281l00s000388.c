#include <stdio.h>
#define MAX_N 101
#define INF 100008
#define Q_LENGTH 101

struct vertex
{
	int distance;
  	int Edge[MAX_N];
  	int Ver[MAX_N];
  	int nEdge;
} typedef vertex;

void swap(int, int);
int parent(int);
int left(int);
int right(int);
void risePriority(int);
void minHeapify(int);
void insert(int);
int extract();
void SSSHP(int);

vertex V[MAX_N];
int n;

int Q[Q_LENGTH];
int length;

int main()
{
  	int i, j;
  	int u;

  	scanf("%d", &n);
 	for(i = 0; i < n; i++)
    {
    	scanf("%d", &u);
    	scanf("%d", &V[u].nEdge);
		for(j = 0; j < V[u].nEdge; j++)
		{
			scanf("%d", &V[u].Ver[j]);
			scanf("%d", &V[u].Edge[j]);
		}
    }
    
    SSSHP(0);
    
	for(i = 0; i < n; i++)
	{
		printf("%d %d\n", i, V[i].distance);
	}

	return 0;
}

void swap(int i1, int i2)
{
	int tmp;

	tmp = Q[i1];
	Q[i1] = Q[i2];
	Q[i2] = tmp;
}

int parent(int i)
{
	return i / 2;
}

int left(int i)
{
	return 2 * i;
}

int right(int i)
{
	return 2 * i + 1;
}

void risePriority(int i)
{
	int p;
	p = parent(i);
	
	if(p > 0 && V[Q[i]].distance < V[Q[p]].distance)
	{
		swap(i, p);
		risePriority(p);
	}
}

void minHeapify(int i)
{
  int l, r;
  int largest;

  l = left(i);
  r = right(i);

  largest = i;
  if(l <= length && V[Q[l]].distance < V[Q[largest]].distance)
    largest = l;
  if(r <= length && V[Q[r]].distance < V[Q[largest]].distance)
    largest = r;

  if(largest != i)
    {
      swap(i, largest);
      minHeapify(largest);
    }
}

void insert(int k)
{
	length++;
	Q[length] = k;
	
	risePriority(length);
}

int extract()
{
	int ret;
	
	if(length < 1) return -1;
	
	ret = Q[1];
	swap(1, length);
	length--;
	minHeapify(1);
	
	return ret;
}

void SSSHP(int start)
{
	int i, j;
	int carent;
	int next;
	int d;
	int visitFlag[MAX_N];
	
	carent = start;

	V[start].distance = 0;
	visitFlag[0] = 0;
	for(i = 1; i < n; i++)
	{
		V[i].distance = INF;
		visitFlag[i] = 0;
	}
	
	while(carent != -1)
	{
		for(j = 0; j < V[carent].nEdge; j++)
		{
			d = V[carent].distance + V[carent].Edge[j];
			next = V[carent].Ver[j];
		
			if(d < V[next].distance && visitFlag[next] != 1)
			{
				V[next].distance = d;
				insert(next);
			}
		}
		carent = extract();
		visitFlag[carent] = 1;
	}
}