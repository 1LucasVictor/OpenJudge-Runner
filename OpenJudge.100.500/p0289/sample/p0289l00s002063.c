#include <stdio.h>

int main(void){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
	if(x<y){
		z=x;
		x=y;
		y=z;
	}
	while(1){
		z = x%y;
		if(z==0){break;}
		x=y;
		y=z;
	}
	printf("%d\n",y);
	return 0;
}

