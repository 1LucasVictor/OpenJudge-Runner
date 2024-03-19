#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	char ch[200];
	int m;
	int h,i,j,k;
	char str[200];

	while(1){
		scanf("%s", ch);
		if(ch[0]=='-')
			break;
		scanf("%d", &m);
		for(i=0; i<m; i++){
			scanf("%d", &h);
			strncpy(str,ch,h);			
			for(j=h; j<strlen(ch); j++){
				ch[j-h] = ch[j];
			}
			for(k=0; k<h; k++){
				ch[strlen(ch)-h+k] = str[k]; 
			}
		}
		printf("%s\n",ch);

	}

	return 0;
}