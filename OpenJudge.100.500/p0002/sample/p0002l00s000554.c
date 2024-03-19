#include<stdio.h>

int main(void){
	int n;
	int one, two, three;
	
	for(scanf("%d",&n);n!=0;n--){
		scanf("%d %d %d",&one,&two,&three);
		
		if((one*one)+(two*two)==(three*three)){
			printf("YES\n");
		}else if((one*one)+(three*three)==(two*two)){
			printf("YES\n");
		}else if((two*two)+(three*three)==(one*one)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	return 0;
}