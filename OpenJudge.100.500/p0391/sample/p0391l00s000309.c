#include <stdio.h>
#include <string.h>
int main(void){
	int a,b,q,i;
	char str[1001],o[10],p[1001],v[2];
	scanf("%s %d",str,&q);
	while(q--){
		scanf("%s %d %d",o,&a,&b);
		if(strcmp(o,"replace")==0){
			scanf("%s",p);
			for(i=0;i<b-a+1;i++){
				str[a+i]=p[i];
			}
		}
		if(strcmp(o,"reverse")==0){
			for(i=0;i<(b-a+1)/2;i++){
				v[0]=str[a+i];
				str[a+i]=str[b-i];
				str[b-i]=v[0];
			}
		}
		if(strcmp(o,"print")==0){
			for(i=a;i<=b;i++){
				printf("%c",str[i]);
			}
			putchar('\n');
		}
	}
	return 0;
}