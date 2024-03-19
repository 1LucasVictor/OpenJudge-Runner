#include <stdio.h>

int main(void) {
	int n;
	int s[14] = {};
	int h[14] = {};
	int c[14] = {};
	int d[14] = {};
	scanf("%d",&n);
	for(int i = 0; i < n*2; i++){
		char tempc;
		int tempn;
		scanf("%c%d",&tempc,&tempn);
		switch(tempc){
			case 'S':
			s[tempn]++;
			break;
			case 'H':
			h[tempn]++;
			break;
			case 'C':
			c[tempn]++;
			break;
			case 'D':
			d[tempn]++;
			break;
		}
	}
	for(int i = 1; i < 14; i++)if(!s[i])printf("S %d\n",i);
	for(int i = 1; i < 14; i++)if(!h[i])printf("H %d\n",i);
	for(int i = 1; i < 14; i++)if(!c[i])printf("C %d\n",i);
	for(int i = 1; i < 14; i++)if(!d[i])printf("D %d\n",i);
	return 0;
}
