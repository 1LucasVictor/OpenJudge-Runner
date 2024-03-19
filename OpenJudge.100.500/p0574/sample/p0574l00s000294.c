#include <stdio.h>

int main() {

 char S[4];
 int i=0;
 int a=0;

 int ret= scanf("%s",S);
 if( ret == EOF ) {
    printf( "scanfでエラー\n" );
    return -1;
  }

 for ( i=1;i<=3;i++){
  if(S[i]==S[i-1]){
    a=1;
  }
 }
 if(a==1){
  printf("Bad");
 }
 else if(a==0){
  printf("Good");
 }
 return (0);
}