#include<stdio.h>
  
int main(int argc, char* argv[])
{
  char r[]={"SHCD"}, a[52];
  int n, b[52], c[4][13];
  int i, j, k;
  
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%*c%c %d", &a[i], &b[i]);
  }
  
  for(i = 0; i < 4; i++){
    for(j = 0; j < 13; j++){
      c[i][j] = 0;
    }
  }
  
  for(i = 0; i < n; i++){
    for(j = 0; r[j] != '\0'; j++){
      if(a[i] == r[j]){
        k = j;
        break;
      }
    }
    c[k][b[i]-1] = 1;
  }
  
  for(i = 0; i < 4; i++){
    for(j = 0; j < 13; j++){
      if(c[i][j] == 0){
        printf("%c %d\n", r[i], j+1);
      }
    }
  }
  return(0);
}