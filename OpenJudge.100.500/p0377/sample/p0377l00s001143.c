#include<stdio.h>

#define true 1
#define false 0

typedef char bool;

int main(){
	bool S[13];
	bool H[13];
	bool C[13];
	bool D[13];
	int A;
	int B;
	int N;
	char E;	
	for(A=0;A<13;A++)
		S[A]=H[A]=C[A]=D[A]=false;
	scanf("%d",&N);
	getchar();
	for(A=0;A<N;A++){
		scanf("%c %d%*c",&E,&B);
		if(E=='S')
			S[B-1]++;
		else if(E=='H')
			H[B-1]++;
		else if(E=='C')
			C[B-1]++;
		else if(E=='D')
			D[B-1]++;
	}
	for(B=0;B<4;B++)
		for(A=0;A<13;A++){
			if(B==0 && !S[A])
				printf("S %d\n",A+1);
			else if(B==1 && !H[A])
				printf("H %d\n",A+1);
			else if(B==2 && !C[A])
				printf("C %d\n",A+1);
			else if(B==3 && !D[A])
				printf("D %d\n",A+1);
		}
	return 0;
}