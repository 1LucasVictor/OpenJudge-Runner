#include<stdio.h>

int main(void)
{
	int i,a_value=1,b_value=0,c_value=-1,a_number,b_number,c_number,k,max_value,max_number;

	scanf("%d%d%d%d",&a_number,&b_number,&c_number,&k);

	max_number = a_number + b_number + c_number;

	for(i=0;i< max_number-k; i++){
		if(c_number == 0){
			if(b_number == 0){
				if(a_number == 0){
				}
				else
					a_number--;
			}
			else
				b_number--;
		}
		else
			c_number--;
	}

	max_value = a_value * a_number + b_value * b_number + c_value * c_number;

	printf("%d\n",max_value);

	return 0;
}
