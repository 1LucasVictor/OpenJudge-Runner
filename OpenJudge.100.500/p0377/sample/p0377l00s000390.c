#include <stdio.h>
#include <math.h>

int main(){
	
	int i,n,s;
	int a[52];
	char m;

	for (i = 0; i < 52; i++){
		a[i] = 0;
	}

	scanf("%d", &n);

	for (i = 0; i < n; i++){
		//scanf("%c %d",&m, &s);
		scanf(" %c", &m);
		scanf("%d",&s);
		if (m == 'S'){
			a[s - 1] = 1;
		}else if(m=='H'){
			a[s + 12] = 1;
		}else if (m=='C'){
			a[s + 25] = 1;
		}else if(m=='D'){
			a[s + 38] = 1;
		}
	}

	for (i = 0; i < 52; i++){
		if (a[i] == 0){
			if (i < 13){
				printf("S %d\n",i+1);
			}else if (i < 26){
				printf("H %d\n",i-12);
			}else if (i < 39){
				printf("C %d\n",i-25);
			}else if(i <52){
				printf("D %d\n",i -38);
			}
		}
		
	}
	return 0;
}