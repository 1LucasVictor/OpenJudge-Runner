#include <stdio.h>
main(){
	char str[21],stra[21];
	int i=0,k,a;
	scanf("%s",str);
	while(str[i]!='\0'){
		i++;
	}
	i--;
	a=0;
	for(k=i;k>=0;k--){
		stra[k]=str[a];
		a++;
	}
	stra[i+1]='\0';
	printf("%s\n",stra);
}