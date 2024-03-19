#include<stdio.h>
void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int GCD(int n,int m){
	if(m > n)
		swap(&n,&m);
	if(m == 0)
		return n;
	else
		return GCD(m,n%m);
}
int main(){
	int a,b,c;

	while(scanf("%d %d",&a,&b) != EOF){
		c = GCD(a,b);
		printf("%d %d\n",c ,(a/c)*b);
	}	
	return 0;
}