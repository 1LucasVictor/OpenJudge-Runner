#include<stdio.h>

int main(){
	int i,rail[10],ac;

	for(i=0;i<10;i++) rail[i]=0;

	i=0;
	while(scanf("%d",&ac)!=EOF){
		if(ac==0){
			printf("%d\n",rail[--i]);
			rail[i]=0;
		}
		else{
			rail[i]=ac;
			i++;
		}

	}


	return 0;
}