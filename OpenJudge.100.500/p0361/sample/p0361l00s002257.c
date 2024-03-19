#include <stdio.h>
main(){
	int h,m,s,S;
	scanf("%d",&S);
	s=S%60;
	m=(S-s)/60%60;
	h=(S-s-60*m)/3600;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}