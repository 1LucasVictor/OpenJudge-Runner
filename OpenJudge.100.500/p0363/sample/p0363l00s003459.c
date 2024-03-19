
#include <stdio.h>

int swap(int *x, int num){

	int temp;
    int i;

    for(i = 0;i<num;i++){
    	if(x[i+1] < x[i]){
    		temp = x[i];
			x[i] = x[i+1];
			x[i+1] = temp;

			i = -1;
    	}
	}
	return 0;
	
}

int main(void) {

	int num = 3;
	int x[num];

	scanf("%d %d %d",&x[0],&x[1],&x[2]);

	swap(x,num);

	printf("%d %d %d\n",x[0],x[1],x[2]);

	return 0;
	
}