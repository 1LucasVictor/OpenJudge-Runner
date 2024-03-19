#include <stdio.h> 

int main(){
	int x;
	int a;
	int b;

	char buf[10];
	fgets(buf,10,stdin);
	sscanf(buf,"%d %d %d" ,&x,&a,&b);

	if(b-a<0){
	   printf("delicious\n");
	}else if(x>b-a){
	   printf("safe\n");
	}else if(x<b-a){
	   printf("dangerous\n");
	}
	return 0;
}