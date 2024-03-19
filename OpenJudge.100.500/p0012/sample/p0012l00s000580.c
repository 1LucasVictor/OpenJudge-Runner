#include <stdio.h>

int main(void){
	int i , a[11] = {0} , buf , a_count = 0;
	while(scanf("%d" , &buf)!=EOF){
		if(buf != 0){
			a[a_count] = buf;
			a_count++;
		}else{
			printf("%d\n" , a[a_count-1]);
			a_count--;
		}
	}

	return 0;
}