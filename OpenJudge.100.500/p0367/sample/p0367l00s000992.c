#include <stdio.h>

int main(){
	int a,b,c;
	int i,j=0;
	scanf("%d %d %d",&a,&b,&c);
	for(i=0; i<b-a; i++){
		if(c%(a+i) == 0){
			j++;
		}
	}
	printf("%d\n",j);
	return 0;
}