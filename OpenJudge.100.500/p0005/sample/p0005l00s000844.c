#include <stdio.h>

int main(void){

	int i,j;
	char str[21];
	char ptr[21]={0};

	scanf("%s", &str);
	
	/*文字数*/
	i=0;
	while(str[i]) i++;

	for( j=0; i>0 ; i--, j++)
		ptr[j] = str[i-1];

		printf("%s\n" , ptr);



	return 0;
}