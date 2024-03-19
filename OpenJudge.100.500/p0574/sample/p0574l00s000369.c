#include <stdio.h>

int main(void) {
	char a[5];
	int flg = 0;
	
	for(int i = 0;i < 4;i++){
	    scanf("%c",&a[i]);
	}
	for(int i = 0;i < 3;i++){
	    if(a[i] == a[i+1]){
	        printf("Bad");
	        flg =1;
	    }
	}
	if(flg == 0){
	    printf("Good");
	}
	return 0;
}

