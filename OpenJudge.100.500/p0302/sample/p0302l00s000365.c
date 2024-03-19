#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000000

void find(char *);

int s[N][10];
int n;

int main(){
  int i,a=0;
  char com[10];

scanf("%d",&n);
if(n>N) exit(0);

for(i=0 ; i<n ; i++){
  scanf("%s",com);
  if(com[0]=='i'){
    scanf("%s",s[a]);
    a++;
  }
  else {
    scanf("%s",com);
    find(com);
  }
}

return 0;

}

void find(char *str){
int i,c=0;

for(i=0 ; i<n ; i++){
  if(strcmp(str,s[i])==0) {
  printf("yes\n");
  c++;
  break;
  }
}
if(c==0) printf("no\n");
}