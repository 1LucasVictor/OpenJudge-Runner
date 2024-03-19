#include <stdio.h>
#include <string.h>
int main()
{
	char card[201];
	char str[201];
	char stra[201];
	int m,h,length;
	int i,k,j=0;

	while(1){
		scanf("%s",card);
		length=strlen(card);
		if(strcmp(card,"-")==0) break;
		scanf("%d",&m);
		for(k=0;k<m;k++){
		    strcpy(str,card);
		    scanf("%d",&h);
		    for(i=0;i<(length-h);i++){
		        card[i]=str[i+h];
	    	}
		   // printf("%s\n",card);
		    for(i=0;i<h;i++){
		        card[length-h+i]=str[i];
		        //printf("%d\n",length-h+i);
		    }
		}
		for(i=0;i<length;i++){
	        stra[j++]=card[i];
    	}
		stra[j++]='\n';
	    
	}
	stra[j]='\0';
	printf("%s",stra);
	
	return 0;
}
