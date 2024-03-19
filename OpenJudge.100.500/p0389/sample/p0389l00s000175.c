#include<stdio.h>
#include<string.h>
int main(){
	char a[201],b[200];
	int m,i,h,c,j;
	while(1){
		scanf("%s",a);
		c=strlen(a);
		if(a[0]=='-'){
			break;
		}
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf("%d",&h);
			for(j=0;j<h;j++){
				b[j]=a[j];
			}
			for(j=h;j<c;j++){
				a[j-h]=a[j];
			}
			for(j=0;j<h;j++){
				a[c-h+j]=b[j];
			}
		}
		for(i=0;i<c;i++){
			printf("%c",a[i]);
		}
		printf("\n");
	}
}
			
	
