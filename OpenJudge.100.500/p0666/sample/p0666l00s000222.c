#include<stdio.h>

int main(){
	char buf[256];
	int X, A, B;
	int diff;
	
  	fgets(buf,256,stdin);
  	sscanf(buf,"%d %d %d",&X, &A, &B);
  	diff = B-A;
  	
  	if( diff <= 0){
		printf("delicious\n");
  	}
  	else if( diff > 0 && diff <= X ){
		printf("safe\n");
  	}
  	else if(diff > 0 && diff > X){
		printf("dangerous\n");
  	}
	
	return 0;
}