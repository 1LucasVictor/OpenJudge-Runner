#include<stdio.h>
#include<stdlib.h>
void bubblesort(int*,int);
int cnt=0;
int main(){
  int i,j;
  int *num;

  scanf("%d",&j);
  num=(int *)malloc(j * sizeof(int));
  for(i=0;i<j;i++)scanf("%d",&num[i]);
  bubblesort(num,j);
  for(i=0;i<j;i++){
    printf("%d",num[i]);
    if(i!=j-1)printf(" ");
  }
  printf("\n");
  printf("%d",cnt);
  return 0;
}
void bubblesort(int *num,int x){
  int flag=1,j,key;
  while(flag){
    flag=0;
    for(j=x-1;1<=j;j--){
      if(num[j]<num[j-1]){
        key=num[j-1];
        num[j-1]=num[j];
        num[j]=key;
        flag=1;
        cnt++;
      }
    }
  }
}

