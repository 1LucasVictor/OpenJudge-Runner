#include <stdio.h>
int A[51];
void make_table();
int main(){


	int a;
	make_table();
	while((scanf("%d",&a))!=EOF)printf("%d\n",A[a]);

	return 0;
}

void make_table(){

	int i,j,k,l;
	for(i=0;i<=9;i++){
	for(j=0;j<=9;j++){
	for(k=0;k<=9;k++){
	for(l=0;l<=9;l++){
		A[i+j+k+l]++;
	}
	}
	}
	}
}