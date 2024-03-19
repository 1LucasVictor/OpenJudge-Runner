#include<stdio.h>
#include<math.h>

int main(){
char s[5];
scanf("%s",s);

char tmp;
int i;
tmp =s[0];
for(i=0;i<3;++i){
	
  if(tmp==s[i+1]){
	  
	  printf("Bad");
	  return 0;
  }
  tmp = s[i+1];
}

printf("Good");
return 0;
}