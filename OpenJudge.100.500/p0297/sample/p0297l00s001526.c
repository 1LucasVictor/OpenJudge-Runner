#include<stdio.h>
#include<string.h>
 
typedef struct {
    char name[100];
    int t;
} data;
 
data array[200001],output[100001],temp;
 
int main(void){

	int N,q,i,j,sum=0;
	scanf("%d %d",&N,&q);
	int head=0,tail=N;
	for(i=0;i<N;i++){
		scanf("%s %d",array[i].name,&array[i].t);
	}
	while(tail!=2*N){
		if(q<array[head].t){
			array[head].t=array[head].t-q;
			sum+=q;
		}
		else{
			if(array[head].t!=0){
				sum+=array[head].t;
				array[head].t=0;
				array[tail]=array[head];
				array[tail].t=sum;
				tail++;
			}
		}
		head++;
		head=head%N;
	}
	for(i=N;i<tail;i++){
		printf("%s %d\n",array[i].name,array[i].t);
	}
	return 0;
}