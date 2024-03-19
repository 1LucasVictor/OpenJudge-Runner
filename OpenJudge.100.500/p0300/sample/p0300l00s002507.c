#include<stdio.h>
#define N 10000
#define Q 500

int main(){

  int s[N],t[Q],c=0;
  int i,j,a,b;

  scanf("%d",&a);
 for( i=0 ; i<a ; i++ ){
   scanf("%d",&s[i]);
 }

  scanf("%d",&b);
    for( j=0 ; j<b ; j++){
      scanf("%d",&t[j]);
    }


  for( i=0 ; i<a ; i++ ){
    for( j=0 ; j<b ; j++){

      if(s[i] == t[j]){
	c++;
	break;
      }
    }
  }

  printf("%d\n",c);
  return 0;
}