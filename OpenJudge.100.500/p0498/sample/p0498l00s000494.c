#include <stdio.h>
#include <stdlib.h>
 
int main(){
    char str[256];
	int num;

	scanf("%s", str);
    num=atoi(str);
    if(num % 2==0) printf("%d\n",num/2);
    else printf("%d\n",(num+1)/2);
  	return 0;
}