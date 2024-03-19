#include<stdio.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>

/*
	入力例：
	3
	1 1 3
*/
int main(){
	int iDataNum,st,sx,sy,i;
	int ct,cx,cy;
	int strInput[2];
	for(int i=0;i<2;i++){
	 scanf("%d", &strInput[i]);
	}
	
	for(int i=0;i<=strInput[0];i++){
		if (i*2+(strInput[0]-i)*4 == strInput[1]) {
			printf("Yes");
			return 0;
		}
	}
	printf("No");


  return 0;
}