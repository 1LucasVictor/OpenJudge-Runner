#include <stdio.h>

int main(void){

	int n,kai,ire,ireA,ireB;
	long sum = 0;
	int max = -1000000;
	int mini = 1000000;

	scanf("%d",&n);

	for(kai=1;kai<=n;kai++){
		scanf("%d",&ire);
		if(ire>max){
			max = ire;
		}
		if(ire<mini){
			mini = ire;
		}
		sum += ire;
		
	}
	printf("%d %d %d\n",mini,max,sum);

	return 0;
}