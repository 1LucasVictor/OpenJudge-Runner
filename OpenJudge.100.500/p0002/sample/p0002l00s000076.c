#include <stdio.h>

void sort(int*, int*, int*);

int main(){
	int i,n,a,b,c;

	scanf("%d", &n);

	for(i=0;i<n;i++){
		scanf("%d %d %d", &a, &b, &c);
		sort(&a,&b,&c);
		if((a*a + b*b) == c*c){
			printf("YES\n");
		} else{
			printf("NO\n");
		}
	}

	return 0;
}

void sort(int* a, int* b, int* c){
	int tmp;
	if(*a > *b){
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
	if(*a > *c){
		tmp = *a;
		*a = *c;
		*c = tmp;
	}
	if(*b > *c){
		tmp = *b;
		*b = *c;
		*c = tmp;
	}
}