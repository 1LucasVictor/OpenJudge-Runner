#include<stdio.h>
int factor;
int num_a,num_b,i,j,num_max;

int main(){
	while(scanf("%d %d",&num_a,&num_b)!=EOF){
		if(num_a<=num_b)num_max=num_a;
		else num_max=num_b;
		for(i=2;i<=num_max;i++){
			j=num_max+2-i;
			if(num_a%j==0&&num_b%j==0){
				factor=j;
				break;}
		}
		printf("%d %d\n",factor,num_a/factor*num_b);
	}
	return 0;
}