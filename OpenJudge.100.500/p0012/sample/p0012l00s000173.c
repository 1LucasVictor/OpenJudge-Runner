/*
Problem 0013 : Switching Railroad Cars
*/
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void){
	int i , a[11] = {0} , b[11] = {0} , buf , a_count = 0 , b_count = 0;
	for(;;){
		scanf("%d" , &buf);
		if(buf != 0){
			a[a_count] = buf;
			a_count++;
		}else{
			b[b_count] = a[a_count-1];
			a_count--;
			b_count++;
		}
		if(a_count == 0) break;
	}
	for(i=0;b[i]!=0;i++){
		printf("%d\n" , b[i]);
	}

	return 0;
}