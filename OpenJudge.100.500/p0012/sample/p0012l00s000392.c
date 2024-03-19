#include <stdio.h>

int main(){
	int i,a,num=0;
	int train[10];
	for(i=0;i<10;i++){
		train[i]=0;
	}
	while(scanf("%d",&a)!=EOF){
		if(a==0){
			printf("%d\n",train[num]);
			num--;
		}else{
			num++;
			train[num]=a;
		}
	}
	
	return 0;
}