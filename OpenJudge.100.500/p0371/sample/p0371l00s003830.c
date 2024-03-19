#include<stdio.h>

int main()
{
		int min;
		int max;
		int sum = 0;

		int num;
		int i;
		int value;

		scanf("%d",&num);

		for(i = 0; i < num; i++){
				scanf("%d",&value);
				sum += value;
				if(i==0){
						min = value;
						max = value;
				}else if(value < min){
						min = value;
				}

				if(value > max){
						max = value;
				}
		}

		printf("%d %d %d\n",min,max,sum);
		return 0;
}
