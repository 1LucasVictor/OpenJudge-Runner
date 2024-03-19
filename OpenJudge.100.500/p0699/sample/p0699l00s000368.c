#include <stdio.h>

int main(void) {
	int num[3];
	int five=0,seven=0;
	scanf("%d%d%d",&num[0],&num[1],&num[2]);
	for(int i=0;i<3;i++){
		if(num[i]==5){five++;}
		if(num[i]==7){seven++;}
	}
	if(five==2&&seven==1)printf("YES");
	else{printf("NO");}
}