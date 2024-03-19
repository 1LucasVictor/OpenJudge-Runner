#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;


void enqueue( P x ){
	strcpy( Q[tail].name, x.name);
	Q[tail].t = x.t;

	tail++;
	if(tail>LEN) tail = 0;
	n++;
}

P dequeue(){

	int ptr = head;

	if(head==tail) NULL;
	
	head++;
	if(head>LEN) head = 0;
	n--;
	return Q[ptr];
}


int main(){
 	int elaps = 0, c;
 	int i, q;
 	P u;

	//
	head = 1;
	tail = 1;
 
	scanf("%d %d", &n, &q);

 	for ( i = 1; i <= n; i++){
 		scanf("%s", Q[i].name);
		scanf("%d", &Q[i].t);
		tail++;
	}


	while( n != 0){

		u = dequeue();
		
		if( u.t > q ){
			u.t = u.t - q;
			enqueue( u );
			elaps += q;
		}else{
			elaps += u.t;
			printf( "%s %d\n", u.name, elaps );
		}

	}

  	return 0;
}