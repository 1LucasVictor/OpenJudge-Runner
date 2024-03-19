#include <stdio.h>

int main(void) {

	int i = 0;
	int n;
	int x;
	char ch;
	int s[13],h[13],c[13],d[13];

	for(i = 0;i < 13;i++){
		s[i] = 0;
		h[i] = 0;
		c[i] = 0;
		d[i] = 0;
	}
	scanf("%d",&n);	
	for(i = 0;i<= n;i++){
		scanf("%c %d ",&ch,&x);
		switch(ch){
			case 'S':
				s[x - 1] = 1;
				break;
			case 'H':
				h[x - 1] = 1;
				break;
			case 'C':
				c[x - 1] = 1;
				break;
			case 'D':
				d[x - 1] = 1;
				break;
			default:
				break;
		}
	}

	for(i = 0;i < 13;i++){
		if(s[i] == 0 ){
			printf("S %d\n",i + 1);	
		}
	}
	for(i = 0;i < 13;i++){
		if(h[i] == 0 ){
			printf("H %d\n",i + 1);	
		}
	}
	for(i = 0;i < 13;i++){
		if(c[i] == 0 ){
			printf("C %d\n",i + 1);	
		}
	}	

	for(i = 0;i < 13;i++){
		if(d[i] == 0 ){
			printf("D %d\n",i + 1);	
		}
	}	

	return 0;
}

