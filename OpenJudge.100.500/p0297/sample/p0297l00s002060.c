#include <stdio.h>
#include <string.h>

#define LEN 100000

typedef struct {
	char name[100];
	int time;
} process;

void enqueue( process );
process dequeue();

int head, tail, n;
process q[LEN];

int main( void ){
	int i, queue, tmp;
	int progress = 0;
	
	scanf("%d %d", &n, &queue);
	
	for( i = 1; i <= n; i++ ){
		scanf("%s", q[i].name );
		scanf("%d", &q[i].time );
	}
	head = 1;
	tail = n+1;
	
	process u;
	while( head != tail ){
		u = dequeue();
		
		if( queue < u.time ){
			tmp = queue;
		}
		else{
			tmp = u.time;
		}
		
		u.time = u.time - tmp;
		progress = progress + tmp;
		
		if( u.time > 0 ){
			enqueue(u);
		}
		else{
			printf("%s %d\n", u.name, progress );
		}
	}
	
	return 0;
}

void enqueue( process a ){
	q[tail] = a;
	tail = (tail+1) % LEN;
}

process dequeue(){
	process a = q[head];
	head = (head+1) % LEN;
	
	return a;
}
