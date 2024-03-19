#include<stdio.h>

int main(){
	char str[4];
	int prin=0;
	
	scanf("%s",str);
	 if(str[0]==str[1]==str[2]==str[3]){
	prin++;
     }
	else if(str[0]==str[1]){
	prin++;
	if(str[2]==str[3])
	prin++;
    }
	else if(str[1]==str[2]){
	prin++;
	if(str[0]==str[3])
	prin++;
    }
	else if(str[0]==str[2]){
	prin++;
	if(str[1]==str[3])
	prin++;
    }
	if(prin==2){
	printf("Yes\n");
    }
	else{
	printf("No\n");
    }
	return 0;
}