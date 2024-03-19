#include <stdio.h>
int	main()	{
	int n,cnt =0,copy,i =0;
	int data[256];
	while(1){
		scanf("%d",&n);
		if(n != 0){
			data[i] = n;
			i++;
		}else if(n == 0){
			i--;
			printf("%d\n",data[i]);
		}
		if(i==0){
			break;
		}
	}
	return	0;
}