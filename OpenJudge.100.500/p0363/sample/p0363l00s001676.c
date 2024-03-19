#include <stdio.h>
#include <stdlib.h>

#define NUM_COUNT 3

int asc(const void* p1, const void* p2){
	return (*(int*)p1) - (*(int*)p2);
}

int main(int argc, char **argv){
	int data[NUM_COUNT];
	int i;
	
	for(i=0;i<NUM_COUNT;i++){
		scanf("%d",data+i);
	}
	
	qsort( data, NUM_COUNT, sizeof(int), asc);

	for(i=0;i<NUM_COUNT;i++){
		if( i < NUM_COUNT-1 ){
			printf("%d ",data[i]);
		} else {
			printf("%d\n",data[i]);
		}
	}
	
	return 0;
}