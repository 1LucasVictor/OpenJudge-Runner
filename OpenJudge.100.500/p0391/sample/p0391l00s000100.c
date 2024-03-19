#include<stdio.h>
#include<string.h>
#define N 1000

int main(void){
	char mzr[N],mei[10],cpy[N],p[N];
	int q,a,b,k,i,j=0;
	char pri[]="print";
	char rev[]="reverse";
	char rep[]="replace";
	
	scanf("%s %d",mzr,&q);
	for(k=0;k<q;k++){
		scanf("%s %d %d",mei,&a,&b);
		if(strcmp(mei,pri)==0){
			for(i=a;i<=b;i++){
				printf("%c",mzr[i]);
			}
			printf("\n");
		}
		else if(strcmp(mei,rev)==0){
			strcpy(cpy,mzr);
			for(i=a,j=b;i<=b;i++,j--){
				mzr[i]=cpy[j];
			}
		}
		else if(strcmp(mei,rep)==0){
			scanf("%s",p);
			for(i=a,j=0;i<=b;i++,j++){
				mzr[i]=p[j];
			}
		}
	}
	return 0;
}
