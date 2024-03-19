#include <stdio.h> 

int main(){
	int x;
	int a;
	int b;

	char buf[256];
	fgets(buf,256,stdin);
	sscanf(buf,"%d %d %d" ,&x,&a,&b);

	if(a-b>=0){
	   printf("delicious\n");
	}else if(x>=b-a){
	   printf("safe\n");
	}else if(x<b-a){
	   printf("dangerous\n");
	}
	return 0;
}