#include<stdio.h>
#include<string.h>

char A[1000000][13];
int n;
void insert(char C[13]){
  
  strcpy(A[n],C);
  n++;
}
void find(char B[13]){
  int i;
  for(i=0;i<=n;i++){
    if(strcmp(A[i],B)==0){
      printf("yes\n");
      break;
    }
    if(i==n){
      printf("no\n");
    }
  }
}
int main(void){

  int i,count;
  char a[7];
  char c[13];
  scanf("%d",&count);
  for(i=0;i<count;i++){
    scanf("%s %s",a,c);

    if ( a[0] == 'i' ) {
      insert(c);
    }
    if(a[0]=='f')  {
      find(c);
    }
  
  }

  return 0;
}