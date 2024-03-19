#include<stdio.h>

#define NUM 10000000
 #define N 100

 void def(int,int);
 
int n;
int arraysi[N],arrayc[N][N];
int arrayd[N],arrayt[N][N];
 
int main(int argc,char *argv[]){

  int i,j,m;

  scanf("%d",&n);

  for(i = 0;i < n;i++){

    scanf("%d",&m);

    scanf("%d",&arraysi[m]);

    for(j = 0;j < arraysi[m];j++){

      scanf("%d",&arrayt[m][j]);

      scanf("%d",&arrayc[m][j]);
    }
  }
 
  for(i = 0;i < n;i++) arrayd[i] = NUM;
  def(0,0);
  for(i = 0;i < n;i++){
    printf("%d %d\n",i,arrayd[i]);
  }
  return 0;

}
 
void def(int p,int x){

  int i;

  arrayd[p] = x;

  for(i = 0;i < arraysi[p];i++){

    if(arrayd[arrayt[p][i]] > x + arrayc[p][i]) def(arrayt[p][i],x + arrayc[p][i]);
  }

}