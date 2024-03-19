#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 1000000




int main(void){
char s[BUFSIZE];
scanf("%s",s);
int cnt =0 ;
char rem;

for(int i = 0 ;i < 4;i++){
  for(int j = 0;j < 4;j++){
    if(i == j)  break;
    if(s[i] == s[j]){
    if(s[i] == rem){
      printf("No");
      exit(0);
    }
      cnt++;
      rem = s[i];
      break;
    }

  }

}

if(cnt == 2) printf("Yes");
else printf("No");

return 0;



}
