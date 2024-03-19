#include <stdio.h>

int main(void)
{
	int n;
	int card[52]={};
	int i, no;
	char c;
	scanf("%d\n", &n);
	for(i=0; i<n; i++) {
		if(i<n-1) {
			scanf("%c%d\n", &c, &no);
		}
		else scanf("%c%d", &c, &no);
		no--;
		if(c=='S') card[no]=1;
		else if(c=='H') card[no+13]=1;
		else if(c=='C') card[no+26]=1;
		else if(c=='D') card[no+39]=1;
	}
	
	for(i=0; i<52; i++) {
		if(card[i]==0) {
			if(i/13==0) printf("S %d\n", i%13+1);
			else if(i/13==1) printf("H %d\n", i%13+1);
			else if(i/13==2) printf("C %d\n", i%13+1);
			else if(i/13==3) printf("D %d\n", i%13+1);
		}
	}
	return 0;
}
