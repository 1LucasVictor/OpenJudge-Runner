/* ex3_4
  bonbonc */

#include<stdio.h>
#include<stdbool.h>

int main(void){
	int number;
	bool flag; /*終わったかどうか*/
	flag = false;
	scanf("%d",&number);
	for(int i = 1;i<=9;i++){/*全探索*/
		for(int j = 1;j<=9;j++){
			if(i*j==number){
				flag = true;
			}
		}
	}

	if(flag){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}