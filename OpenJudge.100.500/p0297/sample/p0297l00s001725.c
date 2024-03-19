#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

/* キューに要素xを追加 */
void enqueue(P x){
	Q[tail] = x;
	tail = (tail + 1)% LEN;
}

/* キューの先から要素を取り出す */
P dequeue(){
	P x = Q[head];
	head = (head + 1)% LEN;
	return x;
}


int main(){
	int elaps = 0, c;
	int i, q;
	P u;
	
	scanf("%d %d", &n, &q);
	
	for ( i = 1; i <= n; i++){
    	scanf("%s", Q[i].name);
    	scanf("%d", &Q[i].t);
	}
	head = 1;
	tail = n+1;

	while(tail != head)
	{
		u = dequeue();
		
		if(u.t > q)
		{
			u.t = u.t - q;
			enqueue(u);
			elaps = elaps + q;
//			enqueue(u);
		}
		else
		{
			elaps = elaps + u.t;
			printf("%s %d\n", u.name, elaps);
		}
	}
	return 0;
}
