#include<stdio.h>
#include<string.h>
int main(){
	int x,y,W,H,r;
	char s[4];
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	if(x+r<=W && x-r>=0){
		if(y+r<=H && y-r>=0){
		strcpy(s,"Yes");
		}
		else{
		strcpy(s,"No");
		}
	}
	else{
		strcpy(s,"No");
		}
	printf("%s\n",s);
	return 0;	
	
}