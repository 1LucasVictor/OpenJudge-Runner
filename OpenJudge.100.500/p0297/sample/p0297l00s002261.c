#include <stdio.h>
#include <stdbool.h>
#define LEN 100000

int i=0,head,tail,TIME=0;
int MAX,Q;

struct p{
	char name[20];
	int t;
};

struct p q[LEN];

int main(){

    scanf("%d%d", &MAX,&Q);
    for(tail=0;tail<MAX;tail++){

        scanf("%s%d", &q[tail].name,&q[tail].t);

    }

	for(head=0,tail=MAX;head!=tail;head=(head+1)%(MAX+1)){

		i=head;
		if(q[i].t<=Q){

			TIME+=q[i].t;
			printf("%s %d\n", q[i].name,TIME);
			q[i].t=0;

		}else{

			TIME+=Q;
			q[tail].t=q[i].t-Q;
			strcpy(q[tail].name,q[i].name);
			tail=(tail+1)%(MAX+1);

		}
	}
	return 0;
}

