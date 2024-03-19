#include <stdio.h>
#include <stdlib.h>

#define LEN 4

void alphabet(char *str,int *);
void count(int *box);

int main (void){
  int i,j;
  char str[LEN]= {'\0'};
  int box[26] = {0};
  if ( scanf("%s",str) == 1){
    alphabet(str,box);
    count(box);   
  }
  return 0;
}

void alphabet(char *str,int *box){
  int i=0,j=0;
  char *alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  for(i=0; i<LEN; i++){
    for(j=0; j<26; j++){
      if ( alp[j] == str[i]) box[j] +=1;
    }}
  return;
}


void count(int *box){
  int i;
  int count=0;
  for(i=0; i<26; i++){
    if (box[i] == 2) count++;
  }
  if (count == 2) printf("Yes\n");
  else printf("No\n");
  return;
}

