#include <stdio.h>
main(){
	int a,b,c,x;
	int count = 0;

	scanf("%d%d%d",&a,&b,&c);
	for(x = a;x <= b;x++){
		if(c%x == 0){
			count++;
		}
	}


	printf("%d\n",count);
return 0;

}