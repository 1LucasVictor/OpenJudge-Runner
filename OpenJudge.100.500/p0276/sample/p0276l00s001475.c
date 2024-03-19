#include <stdio.h>

int main(){
  int head,nu,out,near,i,j;
  int graph_s[100][100];

  scanf("%d",&head);

  for(i=0;i<head;i++){
    for(j=0;j<head;j++){
      graph_s[i][j]=0;
    }
  }


  for(i=0;i<head;i++){
    scanf("%d%d",&nu,&out);
    for(j=0;j<out;j++){
      scanf("%d",&near);
      graph_s[nu-1][near-1]=1;
    }
  }

  
  for(i=0;i<head;i++){
    for(j=0;j<head;j++){
      if(j>0) printf(" ");
      printf("%d",graph_s[i][j]);
    }
    printf("\n");
  }

  return 0;
}
    

