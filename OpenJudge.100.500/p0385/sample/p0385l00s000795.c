#include<stdio.h>
int main(){
	char str[1002]={0,};
	int i,x;
	while(1){
		x=0;
		fgets(str,1002,stdin);
		if(str[0]=='0'){
			break;
		}
		for(i=0;str[i] > 10;i++){
			x += str[i];
			//printf("%d個目は%d\n",i,str[i]);
		}
		x -= i*48;
		printf("%d\n",x);
	}
}
