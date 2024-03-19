#include <stdio.h>
void swap(int *a, int *b);

int main(){
	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);

	if(a>b){
		if(b>c){
			swap(&a,&c);
		}else{
			swap(&a,&b);
			swap(&b,&c);
		}
	}else{
		if(b>c){
			if(a<c){
				swap(&b,&c);
			}else{
				swap(&a,&c);
				swap(&b,&c);
			}
	}
	printf("%d %d %d\n",a,b,c);

	return 0;
	}
}

void swap(int *a,int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}