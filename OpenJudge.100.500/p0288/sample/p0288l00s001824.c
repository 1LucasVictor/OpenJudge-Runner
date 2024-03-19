#include <stdio.h>

int main(void){

int i=0,j,k;
int N,v,c;
int A[1000];

scanf("%d",&N);
c = getchar();
while((c = getchar())!='\n'){
	if( c  == ' ' || c == '\n') continue;
	A[i]=c;
	A[i] = A[i] - 48;
	i++;
}

for(k=0;k<N;k++){
	printf("%d",A[k]);
		if(k<N-1){
			printf(" ");
		}
	}
printf("\n");

for(i=1;i<N;i++){
	v = A[i];
	j = i-1;
	while(j>=0 && A[j]>v){
		A[j+1]=A[j];
		j--;
		A[j+1] = v;
	}
	for(k=0;k<N;k++){
	printf("%d",A[k]);
		if(k<N-1){
			printf(" ");
		}
	}
	printf("\n");
}

return 0;
}