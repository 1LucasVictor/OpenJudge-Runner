#include <stdio.h>

int main()
{
	int skin=100000;
	int skin2;
	int shu;
	int i;
	scanf("%d",&shu);
	for(i=0;shu>i;i++){
		skin=skin*1.05;


	}


	if(skin%10000!=0){
				skin2=skin%10000;
		skin=skin-skin2+10000;
		

	}
		printf("%d\n",skin);
	return 0;
}