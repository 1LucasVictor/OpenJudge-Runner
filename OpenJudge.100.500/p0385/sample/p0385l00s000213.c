#include<stdio.h>

int main(){
	
	char c;
	int i,j,k;
	int cnt;
	long sum;
	char str[1000][1200]={0};
	
	sum = 0;
	
	for(i=0; i<1000; i++){
		for(j=0; j<1200; j++){
			scanf("%c",&str[i][j]);
			if(str[i][j] == '\n'){
				break;
			}
		}
		if(str[i][0] == '0'){
			break;
		}
	}
	
	cnt = i;
	
	for(i=0; i<cnt; i++){
		for(j=0; j<1200; j++){
			if(str[i][j] == '\n'){
				break;
			}
			sum += str[i][j] - '0';
		}
		printf("%ld\n",sum);
		sum = 0;
	}
	
	return 0;
}


