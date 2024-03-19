#include<stdio.h>

int chNum(char);

int main(){
	
	char ch[1001];
	
while(1){
	
	int cnt=0,i;
	
	for(i=0;;i++){
	scanf("%c",&ch[i]);
	if(ch[i]=='\n')break;
	int a=chNum(ch[i]);
	cnt+=a;
	}
	if(cnt==0)break;
	printf("%d\n",cnt);
	
}
return 0;
}

int chNum(char ch){	
	return ch-'0';
}