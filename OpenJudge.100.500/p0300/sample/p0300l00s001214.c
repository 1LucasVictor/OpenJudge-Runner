#include<stdio.h>
#define N 10000


int main(){
  int loop1,loop2;
  int retu1[N],retu2[N];
  int i,j,count=0;
 
  scanf("%d",&loop1);
  for(i=0;i<loop1;i++){
    scanf(" %d",&retu1[i]);
  }

  scanf("%d",&loop2);
  for(i=0;i<loop2;i++){
    scanf(" %d",&retu2[i]);
  }

  for(i=0;i<loop2;i++){
    for(j=0;j<loop1;j++){
      if(retu1[j]==retu1[j+1])continue;
      if(retu1[j]==retu2[i]){
	count++;
      }
    }
  }

  printf("%d\n",count);
  
  return 0;
}

