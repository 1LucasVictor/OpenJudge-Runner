#include<stdio.h>
#define MAX 100

int number[MAX][MAX];

int main(void){

 int a,b,c,i,j,l;

 scanf("%d",&l);

 for(i=0; i<l; i++){
 scanf("%d",&a);
 scanf("%d",&b);

  for(j=0; j < b; j++){
  scanf("%d",&c);
  number[a-1][c-1] =1;
  }
 }
 for(i =0; i<l; i++){
  for(j=0; j<l-1; j++){
   printf("%d",number[i][j]);
  }
 printf("%d\n",number[i][j]);
 }
 return 0;
}