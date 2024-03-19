#include<stdio.h>

int main(){
	int n;
	int ns[10];
	int length;
	length = 0;
	while(scanf("%d",&n)!=EOF){
		if(n == 0){
			length -= 1;
			printf("%d\n",ns[length]);
		}else{
			ns[length] = n;
			length += 1;
		}
	}
	return 0;
}