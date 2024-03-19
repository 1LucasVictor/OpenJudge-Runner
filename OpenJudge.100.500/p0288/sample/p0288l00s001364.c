#include <stdio.h>
#define N 100
int main (){
  int n,a,i,j,k,data[N],tmp;
  scanf("%d",&n);
  for(a=0; a<n; a++){
    scanf("%d",&data[a]);
  }
  for(i=1; i<n; i++){
    for(k=0; k<n; k++){
      printf("%d ",data[k]);
    }
  printf("\n");
    tmp = data[i];
    if(data[i-1]>tmp){
      j=i;
      do{
	data[j]=data[j-1];
        j--;
      }while(j>0 && data[j-1] > tmp);
	data[j]=tmp;
    }
  }
  for(k=0; k<n; k++){
    printf("%d ",data[k]);
  }
  printf("\n");
}