#include <stdio.h>

int main(void){
	int i , a[100] = {0} , buf , a_count = 0;
	for(;;){
		scanf("%d" , &buf);
		if(buf != 0){
			a[a_count] = buf;
			a_count++;
		}else{
			printf("%d\n" , a[a_count-1]);
			a_count--;
		}
		if(a_count == 0) break;
	}
	return 0;
}