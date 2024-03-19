#include<stdio.h>
 
static const int N = 500;
static const int INFTY = (1<<21);
 
#define NIL -1
 
int p[100];
int key[100];
int n;
 
 
main(){
  int i,j,a,b,c,sum;
  int M[100][100];
  int l[100];
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    for (j=0;j<n;j++){
      scanf("%d",&a);
      M[i][j] = (a==-1)?INFTY:a;
    }
  }
 
 
 
  for(c=0;c<n;c++){
    key[c]=100000000;
 
    p[c]=NIL;
 
    l[c]=NIL;
  }
  key[0]=0;
 
  while(1){
    int c=NIL;
    int b=100000000;
 
 
    for(i=0;i<n;i++){
      
 
      if(key[i]<b && l[i]==NIL){
    b=key[i];
    c=i;
      }
    }
     
       
     
    if(c==NIL){
      break;
    }
 
    for(b=0;b<n;b++){
      if(M[c][b] < key[b] && l[b]==NIL){
    key[b]=M[c][b];
    p[b]=c;
      }
    }
    l[c]=0;
  }
 
 
  sum = 0;
 
  for ( i = 0; i < n; i++ ){
    if ( p[i] != -1 ) sum += M[i][p[i]];
  }
 
  printf("%d\n", sum);
 
  return 0;
}