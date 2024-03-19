#include <stdio.h> 

int main(){
	int x;
	int a;
	int b;

	char buf[10];
	fgets(buf,10,stdin);
	sscanf(buf,"%d %d %d" ,&x,&a,&b);

	if(x>b-a){
	   if(b-a<0){
	   printf("delicous\n");
	   }else{
	   printf("safe\n");
	   }
	}else if(x<b-a){
	   printf("dangerous\n");
	}
	return 0;
}