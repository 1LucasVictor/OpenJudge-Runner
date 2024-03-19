#include<stdio.h>
int main(void){
	int W=0,H=0,x=0,y=0,r=0;

	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

	if(x+r>W || x+r<0)/** x+r>xまたは<0なら偽 **/{
		printf("No\n");
	}else if(x-r>W || x-r<0)/** x-r>xまたは<0なら偽 **/{
		printf("No\n");
	}else if(y+r>H||y+r<0)/**y+r>yまたは<0なら偽**/{
		printf("No\n");
	}else if(y-r>H||y+r<0)/**y-r<0または>yなら偽**/{
		printf("No\n");
	}else{
		printf("Yes\n");
	}

	//それ以外は真
}

