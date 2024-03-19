#include<stdio.h>
#include<string.h>
int main(){
	int x=10,y=20,W=100,H=100,r=10;
	char s[4];
	if(x+r<=W && x-r>=0){
		if(y+r<=H && y-r>=0){
		strcpy(s,"Yes");
		}
		else{
		strcpy(s,"No");
		}
	}
	else{
		strcpy(s,"Yes");
		}
	printf("%s\n",s);
	return 0;	
	
}