#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define BUFSIZE 10000000
typedef long long ll;
#define WDSIZE 10000

char S[BUFSIZE];
char T[BUFSIZE];

int main(void){
      scanf("%s",S);
      scanf("%s",T);
      for(int i = 0;i < BUFSIZE;i++){
        if(S[i] != '\0'){
          if(S[i] != T[i]){
            printf("No");
            exit(0);
          }
        }
        else{
        printf("Yes");
        exit(0);
        }
      }
}
