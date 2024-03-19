#include <stdio.h>
int main(){
	int Pos[12];
	int *p;
	int car;
	int i;

	p=Pos;
	for(i=0;i<12;i++){
		Pos[i]=-1;
	}

	while(scanf("%d",&car)!=EOF){
//printf("car--%d\n",car);
		if(car){
			p++;
			*p=car;
		}
		if(!car){
			printf("%d\n",*p);
			p--;
		}
	}

	return 0;
}