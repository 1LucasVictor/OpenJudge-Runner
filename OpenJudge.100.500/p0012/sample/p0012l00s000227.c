#include <stdio.h>
#include <string.h>
int main() {
	int in[100]={0};
	int out[100]={0};
	int count = 0;
	int i = 0,z = 0,c;
	while(scanf("%d",&in[i])!=EOF){
		if(in[i]!=0){
			i++;
			//printf("in[%d]=%d\n",i,in[i]);
		}else{
			//printf("%d",in[i-1]);
			out[z] = in[i-1];
			//printf("out[%d]=%d\n",z,out[z]);
			z++;
			i--;
		}
	}
	for(i=0;i<z;i++){
		printf("%d\n",out[i]);
	}
	return 0;
}