#include<stdio.h>
 
int main(){
  while(1){
    int i,ans = 0;
    char x[1001];
    scanf("%s",x);
    if(x[0] == '0') break;
    for(i = 0; x[i] != '\0'; i++) ans += x[i] - '0';
    printf("%d\n",ans);
  }
  return 0;
}