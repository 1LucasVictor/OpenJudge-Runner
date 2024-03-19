#include<stdio.h>

void sort(int *a,int *b,int *c){
	int temp;
	if(*a < *b){
		temp = *a;	*a = *b;	*b = temp;
	}
	if(*a < *c){
		temp = *a;	*a = *c;	*c = temp;
	}
}

int main(void)
{
	int num,l,a,b,c;
	
	scanf("%d",&l);
	
	for(num = 0 ; num < l ; num++){
		scanf("%d %d %d",&a,&b,&c);
		sort(&a,&b,&c);
		
		if((a*a) == (b*b) + (c*c)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	return 0;
}