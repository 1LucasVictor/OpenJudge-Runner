#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void main(void){
	char buf[5]={'\0'};
	char ch;
	int cnt=0;
	char *pt=NULL;
	int ans=0;

	scanf("%s",buf);

	cnt=0;
	while(1){
	  if(buf[cnt+1]=='\0'){
		  break;
	  }
	  if(buf[cnt]!='\n'){
		ch=buf[cnt];
		buf[cnt]='\n';
		pt=strchr(buf,ch);
		if(pt==NULL){
			ans=-1;
			break;
		}else{
			*pt='\n';
			pt=NULL;
		}
	  }

	cnt++;
  }
  if(ans==0){
	  printf("Yes\n");
  }else{
	  printf("No\n");
  }

}