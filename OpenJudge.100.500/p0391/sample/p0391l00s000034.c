#include<stdio.h>
#include<string.h>
int main(void){
	char str[1001],buf[1001]={NULL},bufr[1000]={NULL},p[1001],command[10];
	int q,a,b,i,j;

	scanf("%s %d",str,&q);
	for(j=0;j<q;j++){
		scanf("%s %d %d",command,&a,&b);
		if(strcmp(command,"print")==0){
			for(i=0;i<1001;i++) buf[i]=NULL;
			strncpy(buf,str+a,b-a+1);
			printf("%s\n",buf);
		}
		else if(strcmp(command,"reverse")==0){
			strncpy(buf,str,a);
			for(i=0;i<=b-a;i++) bufr[i]=str[b-i];
			strcat(buf,bufr);
			strcat(buf,str+b+1);
			strcpy(str,buf);
		}
		else if(strcmp(command,"replace")==0){
			scanf("%s",p);
			for(i=a;i<=b;i++) str[i]=p[i-a];
		}
	}
	return 0;
}