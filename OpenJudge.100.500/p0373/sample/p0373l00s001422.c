#include<stdio.h>
int main(void){
	int Height, Width;
	int i, j;
	do{
		scanf("%d%d",&Height,&Width);
		if(Height==0&&Width==0)break;
		for(i=0;i<Height;i++){
			for(j=0;j<Width;j++){
				if((i==0)||(i==Height-1))
				putchar('#');
				else if((j==0)||(j==Width-1))
				putchar('#');
				else
				putchar('.');
			}
			putchar('\n');
		}
		putchar('\n');
	}while(1);
}