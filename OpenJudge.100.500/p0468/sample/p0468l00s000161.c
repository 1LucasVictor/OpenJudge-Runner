#include <stdio.h>
#include <string.h> 
 
#define N 5
 
int main(){
  char S[N];
  char* abc = "ABC";
  char* arc = "ARC";
  scanf( "%s", S );
 
  if ( strcmp( S, abc ) == 0 ){
    printf( "%s\n", arc );
  }else{
    printf( "%s\n", abc );
  }
  
  return 0;
  
}
