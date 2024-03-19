#include<stdio.h>

int main (void){
	
	int m,i,j,k,h,ns=0;
	char card[201]={0};
	char box[201]={0};
	char *p=card,*q=box;
	char c;
	
	for(;;){
		scanf("%s",p);
		
		if(*p=='-')break;
		while(card[ns] != '\0'){
			ns++;
		}
		
		scanf("%d",&m);
		
		for(i=0;i<m;i++){
			for(k=0;k<201;k++){
				box[k]=0;
			}
			scanf("%d",&h);
				for(j=0;j<h;j++){
					*(q+j)=*(p+j);
				}
				for(j=0;j<ns;j++){
					*(p+j) = *(p+h+j);
				}
				
				for(j=0;j<h;j++){
					*(p+ns-h+j) = *(q+j);
				}
		}
		printf("%s\n",p);
	}
	
	

return 0;
}