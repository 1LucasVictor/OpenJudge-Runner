#include<stdio.h>

int main(void)
{
	int i,j;
	char cards[] = {'S', 'H', 'C', 'D'};
	char e;
	int k;
	int no;
	int num;
	int v[4][13];
	
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			v[i][j] = 0;
		}
	}
	
	scanf("%d",&no);
	for(i=0;i<no;i++){
		scanf(" %c",&e);
		scanf("%d",&num);
		switch(e){
		case 'S' : k = 0; break;
		case 'H' : k = 1; break;
		case 'C' : k = 2; break; 
		case 'D' : k = 3; break;
		}
		v[k][num - 1] = 1;
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(v[i][j] == 0){
				printf("%c %d\n",cards[i],j + 1);
			}
		}
	}
	return 0;
}