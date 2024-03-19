#include<stdio.h>
#define N 100
 
int main(){
  
 int M[N][N];
 int a,b,c,d;
 int i,j;
  
 scanf("%d",&a);
  
 for( i = 0 ; i < a ; i++){
  for( j = 0 ; j < a ; j++){
    M[i][j]=0;
  }
 }
  
 for( i = 0 ; i < a ; i++ ){
   scanf("%d%d",&b,&c);
   b--;
   for( j = 0 ; j < c ; j++){
     scanf("%d",&d);
     d--;
     M[b][d] = 1;
   }
 }
 
 for( i = 0 ; i < a ; i++){
  for( j = 0 ; j < a ; j++ ){
   if(j == a-1)printf("%d\n",M[i][j]);
   else printf("%d ",M[i][j]);
  }
 }
 return 0 ;
}