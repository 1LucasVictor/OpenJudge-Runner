#include<stdio.h>

int main(){
	char str[3];
	scanf("%s",str);
	int flagA = 0;
  	int flagB = 0;
  	for(int i = 0;i<3;i++){
      if('A'==str[i]) flagA = 1;
  	  if('B'==str[i]) flagB = 1;
    }
  
  	if(flagA == 1 && flagB == 1) printf("Yes");
  	else printf("No");
return 0;
}