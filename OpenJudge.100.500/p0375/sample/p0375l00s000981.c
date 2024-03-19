#include <stdio.h>
int main(){
	int x=1,y,z;

	scanf("%d",&y);
	while(1){
		if(x%3==0)
			printf(" %d",x);
		else if(x%10==3){
				printf(" %d",x);
				z=x;
				while(1){
					z /= 10;
					if(z%10==3)
						printf(" %d",z);
					if(z<10)
						break;
				}
			}
		if(x==y)
			break;
		x++;
	}
	printf("\n");
	return 0;
}