#include <stdio.h>

int main(){
	int t,ts;
	int train[10];

	ts = 0;

	while(scanf("%d",&t) != EOF){
		if(t == 0){
			printf("%d\n",train[ts-1]);
			train[ts-1] = 0;
			ts--;
		}else{
			train[ts] = t;
			ts++;
		}
	}

	return 0;
}