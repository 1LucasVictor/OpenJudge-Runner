
#include <stdio.h>

int main(void){
	int n,i,j,flag, count;
	while (scanf("%d",&n) != EOF){
		count = 0;
		for (i=2; i<=n; i++){
			flag=0;
			for (j=2; j<=i; j++){
				if (i%j==0 && i!=j){
					flag++;
					break;
				}
			}
			if (flag==0){
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}