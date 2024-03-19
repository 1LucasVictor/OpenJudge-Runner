#include <stdio.h>
#include <string.h>
int main(){
	char str[1001],order[8],p[1001],spa[2];
	int i,a,b,q,k,j;
	scanf("%s",str);
	scanf("%d",&q);
	for(i=0;i<q;i++){
		scanf("%s",order);
		scanf("%d %d",&a,&b);
		if(strcmp(order,"replace")==0){
			scanf("%s",p);
		}
		if(strcmp(order,"print")==0){
			for(k=a;k<=b;k++){
				printf("%c",str[k]);
			}
			printf("\n");
		}else if(strcmp(order,"reverse")==0){
			for(k=0;k<=(b-a)/2;k++){
				spa[1]=str[k+a];
				str[k+a]=str[b-k];
				str[b-k]=spa[1];
			}
		}else if(strcmp(order,"replace")==0){
			j=0;
			for(k=a;k<=b;k++){
				str[k]=p[j];
				j++;
			}
		}
	}
	return 0;
}
