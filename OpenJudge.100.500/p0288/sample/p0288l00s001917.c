#include<stdio.h>

int main(){
  int a,i,j,k,v;
  scanf("%d",&a);
  int b[a+1];
  for(i=1;a>=i;i++){
    scanf("%d",&b[i]);
  }
  for(i=1;a>=i;i++){
    v = b[i];
    j = i-1;
    while(j>=0 && b[j] > v){
      b[j+1] = b[j];
      j--;
    }
    b[j+1] = v;
    for(k=1;a>=k;k++){
      printf("%d",b[k]);
      if(a>k)printf(" ");
    }
    printf("\n");
 }
 return 0;
}

