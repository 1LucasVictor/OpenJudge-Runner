#include <stdio.h>

int main(void)
{
	int i,n,total,total_foot,crane_foot=2,turtle_foot=4;

	scanf("%d%d",&total,&total_foot);

	for(i=total;i>=0;i--){
		n = crane_foot * i + turtle_foot * (total - i);
		if(n == total_foot)
			break;
	}

	if(n == total_foot){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}

	return 0;

}
