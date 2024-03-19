#include<stdio.h>



main(){
	char c[1001];
int i;
int hoge=0;
	    while(1){
			scanf("%s",&c);
			if(c[0]=='0'){
				break;
			}
			
			for(i=0; c[i]!='\0'; i++){
				
			hoge += c[i]-'0';
			}
			
			printf("%d\n",hoge);
			hoge=0;
			
		   }

	return 0;
}