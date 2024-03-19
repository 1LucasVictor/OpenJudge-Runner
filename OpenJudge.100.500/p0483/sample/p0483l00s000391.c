#include <stdio.h>

int main(){
	char str[10];
    scanf("%s", str);
    for(int i = 0; i < 3; i++){
    	if(str[i]=='7'){
        	printf("Yes");
            return 0;
        }
    }
printf("No");
}