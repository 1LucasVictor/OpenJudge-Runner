#include <stdio.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int isChokkaku(int a, int b, int c){
	int max = 0;
	int ot1,ot2;
	max=a; ot1=b; ot2=c;
	
	if(ot1>max) swap(&max, &ot1);
	if(ot2>max) swap(&max, &ot2);

	if(max*max==ot1*ot1+ot2*ot2) return 1;
	else return 0;
}

int main(void){
	int num;
	int i;
	int a,b,c;

	scanf("%d", &num);

	for(i = 0 ; i < num ; i++){
		scanf("%d %d %d", &a, &b, &c);
		if(isChokkaku(a,b,c)) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}