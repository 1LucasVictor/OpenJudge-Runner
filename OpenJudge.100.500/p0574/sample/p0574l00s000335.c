#include <stdio.h>
 
 
 
int main()
{
	char str[4];
	int i;
	
		scanf("%s", str,5);
	
	if (str[0] == str[1] || str[1] == str[2] || str[2] == str[3] || str[3] == str[4]) {
		printf("Bad\n");
	}else if(str[0] == str[1] && str[1] == str[2] || str[2] == str[3] && str[3] == str[4]) {
	printf("Bad\n");
    }else if(str[0] == str[1] && str[1] == str[2] && str[2] == str[3] && str[3] == str[4]) {
      printf("Bad\n");
        }
      else  printf("Good\n");
 
 
    return 0;
}