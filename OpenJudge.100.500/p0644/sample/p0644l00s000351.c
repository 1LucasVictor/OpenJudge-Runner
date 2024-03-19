#include<stdio.h>

int main(){
	int i,cnt=0;
	char c;
	for(i=0;i<3;i++){
		c=getchar();
		if(c=='1')cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}