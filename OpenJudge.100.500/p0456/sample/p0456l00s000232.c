#include <stdio.h>
int main(){
char s[200000]={0},t[200000]={0};
int i ;
int count=0;
  scanf("%s",s);
  scanf("%s",t);
for(i=0;i<200000;i++){
	if(s[i] != t[i]) count++;
}
printf("%d",count);
}