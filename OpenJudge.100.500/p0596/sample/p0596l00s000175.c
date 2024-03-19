#include<stdio.h>
#include<string.h>

int main(){
	
  int i, count0=0, count1;
  char S[10000];
  
  if(scanf("%s", S)==0) return -1;
  
  count1=strlen(S);
  
  for(i=0;S[i]!='\0';i++){
  	if(S[i]=='0') count0++;
  }

  count1-=count0;
  
  if(count1>=count0) printf("%d", count0*2);
  else printf("%d", count1*2);
  
  return 0;
}
