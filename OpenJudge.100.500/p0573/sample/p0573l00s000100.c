#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void *a,const void* b){
  return strcmp((char *)a,(char *)b);
}

int main(void){

char s[4];
int i;

scanf("%s",s);

qsort(s,4,sizeof(char),cmp);
if(s[0]==s[1]&&s[2]==s[3]&&s[1]!=s[2])
printf("Yes");
else
printf("No");




return 0;
}
