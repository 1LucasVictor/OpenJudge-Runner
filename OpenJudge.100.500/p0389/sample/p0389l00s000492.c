#include<stdio.h>
#include<string.h>
 
int main(){
	
	//準備部分
	char ch[201]={},ch1[200]={},ch2[200]={};
	int m,h,len,i,j;
	
	//入力・処理・出力部分
	while(1){
		scanf("%s",ch);
		if(ch[0]=='-')break;
		len=strlen(ch);
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf("%d",&h);
			for(j=0;j<h;j++)ch1[j]=ch[j];
			for(j=h;j<len;j++)ch2[j-h]=ch[j];
			//printf("%s %s\n",ch1,ch2);
			strcat(ch2,ch1);
			strcpy(ch,ch2);
			//printf("[%s]\n",ch);
			for(j=0;j<200;j++){
				ch1[j]=0;
				ch2[j]=0;
			}
		}
		printf("%s\n",ch);
	}
	
	return 0;
}
