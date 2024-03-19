#include <stdio.h>
int main(void){
	int n;
	int S[13],H[13],C[13],D[13];
	int nm;
	char m;
	
	int i,j;
	
	for(i = 0;i < 13;i++){
		S[i] = 0;
		H[i] = 0;
		C[i] = 0;
		D[i] = 0;
	}
	
	
	scanf("%d",&n);
	for(i = 0;i < n*2;i++){
		scanf("%c %d",&m,&nm);
		if(m == 'S'){
			S[nm-1] = 1;
		}else if(m == 'H'){
			H[nm-1] = 1;
		}else if(m == 'C'){
			C[nm-1] = 1;
		}else if(m == 'D'){
			D[nm-1] = 1;
		}
	}
	
	for(j = 0;j <4;j++){
		for(i = 0;i < 13;i++){
			switch(j){
				case 0:
					if(S[i] == 0){
						printf("S %d\n",i+1);
					}
					break;
				case 1:
					if(H[i] == 0){
						printf("H %d\n",i+1);
					}
					break;
				case 2:
					if(C[i] == 0){
						printf("C %d\n",i+1);
					}
					break;
				case 3:
					if(D[i] == 0){
						printf("D %d\n",i+1);
					}
					break;
			}
		}
	}
    return 0;
}