#include<stdio.h>
int main(){
	int num, i;
	int work;
	int sum = 0, min = 1000000, max = -1000000;
	scanf("%d", &num);
	for(i = 0;i < num;i++){
		scanf("%d", &work);
		sum += work;
		if(work < min)min = work;
		if(work > max)max = work;
	}
	printf("%d %d %d\n", min, max, sum);
	return 0;
}
