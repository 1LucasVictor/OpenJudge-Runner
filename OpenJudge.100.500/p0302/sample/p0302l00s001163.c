#include <stdio.h>
#include <string.h>
 
#define M 1000999 
#define NIL (-1)
#define L 14
 
char H[M][L]; 

int getChar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
}

int getKey(char str[]){
  int sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ){
    sum += p*(getChar(str[i]));
    p *= 5;
  }
  return sum;
}
 
int h1(int key) {
  return key % M;
}
int h2(int key){
  return 1 + key % (M-1);
}
 
int find(char s[]){
 
  int i = 0,num;
 
  while(1){
    num = (h1(getKey(s)) + i * h2(getKey(s))) % M;
 
    if(H[num][0] == '\0') return 0;    
 
    if(strcmp(H[num],s) == 0){
      return 1;
    }
  i++;
 
  }
 
}
 
void insert(char s[]){
 
  int i=0,num;
 
  while(1){
    num = (h1(getKey(s)) + i *h2(getKey(s))) % M;
     
    if(H[num][0] == '\0'){  
      strcpy(H[num],s);
      return;
    } 
    i++;
  }
   
}
 
 
int main(){
    int i, n, h;
    char s[L], cm[9];
    for ( i = 0; i < M; i++ ) H[i][0] = '\0';
    scanf("%d", &n);
    for ( i = 0; i < n; i++ ){
      scanf("%s %s", cm, s);
      if ( cm[0] == 'i' ){
          insert(s);
      } else {
          if (find(s)){
            printf("yes\n");
          } else {
          printf("no\n");
        }
      }
    }
    return 0;
}