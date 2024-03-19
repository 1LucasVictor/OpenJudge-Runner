# include <stdio.h>

int main(void){
	int N, i;
	int j=0;
	scanf("%d", &N);
	for(i=1; i<10; i++){
		if(N%i==0 && N/i < 10){
			printf("Yes");
			j = 1;
			break;
		}
	}
	if(j == 0){
		 printf("No");
	 }
	return 0;
}
