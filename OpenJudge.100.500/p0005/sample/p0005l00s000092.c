#include <stdio.h>
#include <string.h>

int main(void){
	char str[21],gyaku[21];
	int mojisu,i;
	scanf("%s",str);
	mojisu = strlen(str);
	for(i = 0;i < mojisu;i++){
		gyaku[i] = str[mojisu-i-1];
	}
	gyaku[i] = '\0';
	
	printf("%s\n",gyaku);
	
	return 0;
}