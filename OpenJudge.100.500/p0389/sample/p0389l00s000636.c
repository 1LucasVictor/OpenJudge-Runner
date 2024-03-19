#include <stdio.h>
#include <string.h>
int main(void){
	char w[201],t[201];
	int m,h,l,i;
	while(1){
		scanf("%s",w);
		if(strcmp(w,"-")==0)
			break;
		l=strlen(w);
		scanf("%d",&m);
		while(m--){
			scanf("%d",&h);
			for(i=0;i<l;i++){
				t[i]=w[(i+h)%l];
			}
			t[l]='\0';
			strcpy(w,t);
		}
		printf("%s\n",t);
	}
	return 0;
}