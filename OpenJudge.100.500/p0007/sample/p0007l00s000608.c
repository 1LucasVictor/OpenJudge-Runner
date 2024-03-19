#include <stdio.h>

#define MAX 9

int count_combi(int);

int main(){
	int num, count;

	while(scanf("%d", &num) != EOF){
		count = count_combi(num);
		printf("%d\n", count);
	}

	return 0;
}

int count_combi(int num){
	int count = 0;
	int i,j,k,l;

	// すぐ数えれるシリーズ
	// 36より大きい時と36のとき
	if(num > 36){
		return 0;
		// 9,9,9,9
	} else if(num == 36){
		return 1;
		// その他
	} else {
		for(i=0;i<=MAX;i++){
			for(j=0;j<=MAX;j++){
				for(k=0;k<=MAX;k++){
					for(l=0;l<=MAX;l++){
						if((i+j+k+l) == num){
							count++;
						}
					}
				}
			}
		}
	}
	return count;
}