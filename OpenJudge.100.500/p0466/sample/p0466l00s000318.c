#include<stdio.h>
#define N 100

int main(void){
  	void check(char [],char[]);
  	char s[N],s_n[N];
  
	scanf("%s",&s);
 	scanf("%s",&s_n);
  
  	check(s,s_n);
  	return 0;
}

void check(char s[N], char s_n[N]){
  	int F = 1;
  	for(int j = 0; s[j] != '\0';j++){
      	//printf("s = %c, s_n = %c\n",s[j],s_n[j]);
     	if(s[j] != s_n[j]){
          	printf("No\n");
          	F = 0;
          	break;
        }     
    }
  	if(F)
      printf("Yes\n");
}

