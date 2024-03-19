#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define STR 12
#define N 1000000

int insert(int);
int find(int);

char str[N][STR],s1[N][7],s2[N][STR];
int n,last=0;

int main(void){
  int i;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s %s",s1[i],s2[i]);
  }
  for(i=0;i<n;i++){
    
    if(s1[i][0]=='i') insert(i) ;
    else {
      if(find(i)==1) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}

int insert(int key){
  strcpy(str[last],s2[key]);
  last++;
  return 1;
}

int find(int key){
  int i;
  for(i=0;i<last;i++){
    if(strcmp(s2[key],str[i])==0) return 1;
  }
  return 0;
}