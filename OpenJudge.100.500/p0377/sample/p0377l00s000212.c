#include <stdio.h>

int main(void)
{
	int a,b,cards[4][13],c,d,kz;
	char mk,z;
	
	c=0;
	d=0;
	
	for(a=0;a<4;a++){
		for(b=0;b<13;b++){
			cards[a][b]=0;
		}
	}
	
	scanf("%d",&a);
	
	for(b=1;b<=a;b++){
		scanf("%c %c %d",&z,&mk,&kz);
		switch(mk){
		case 'S':cards[0][kz-1]=100; break;
		case 'H':cards[1][kz-1]=100; break;
		case 'C':cards[2][kz-1]=100; break;
		case 'D':cards[3][kz-1]=100;
		}
	}
	
	for(a=0;a<4;a++){
		for(b=0;b<13;b++){
			if(cards[a][b]==0){
				if(a==0){
					printf("S %d\n",b+1);
				}
				if(a==1){
					printf("H %d\n",b+1);
				}
				if(a==2){
					printf("C %d\n",b+1);
				}
				if(a==3){
					printf("D %d\n",b+1);
				}
			}
		}
	}
		
	return 0;
}