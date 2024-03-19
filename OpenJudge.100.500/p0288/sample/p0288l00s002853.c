#include <stdio.h>

int main(void){

int i=0,j,k;
int N,v,c;
int A[100];

scanf("%d",&N);
c = getchar();
while((c = getchar())!='\n'){
	if( c  == ' ' || c == '\n') continue;
	A[i]=c;
	A[i] = A[i] - 48;
	i++;
}

for(i=1;i<=N;i++){
	for(k=0;k<N;k++){
		if(k==N){
			printf("%d",A[k]);
			break;
		}
		printf("%d ", A[k]);
	}
	printf("\n");
	v = A[i];
	j = i-1;
	while(j>=0 && A[j]>v){
		A[j+1]=A[j];
		j--;
		A[j+1] = v;
	}
}

return 0;
}