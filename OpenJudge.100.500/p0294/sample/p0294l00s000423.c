#include<stdio.h>
#define TRNP 36
typedef struct{
  int k;
  char mozi;
}card;
    
int main(){
  int m,min;
  card num[TRNP],suit[TRNP],temp;
  scanf("%d",&m);
  int i,j;  
  for(i=0;i<m;i++){
    scanf(" %c%d",&num[i].mozi,&num[i].k);
    suit[i].mozi=num[i].mozi;
    suit[i].k=num[i].k;
  }
  for(i=0;i<m;i++){
    for(j=m-1;j>i;j--){
      if(num[j].k<num[j-1].k){
	temp=num[j];
	num[j]=num[j-1];
	num[j-1]=temp;
      }
    }
  }
  for(i=0;i<m-1;i++){
    printf("%c%d ",num[i].mozi,num[i].k);
  }
  printf("%c%d\nStable\n",num[i].mozi,num[i].k);
  for(i=0;i<m-1;i++){
    min=i;
    for(j=i;j<=m-1;j++){
      if(suit[j].k<suit[min].k)
	min=j;
    }
    temp=suit[i];
    suit[i]=suit[min];
    suit[min]=temp;
  }
  for(i = 0; i < m-1; i++){ 
    printf("%c%d ",suit[i].mozi,suit[i].k);
  }
  printf("%c%d\n",suit[i].mozi,suit[i].k);
  for(i = 0;i<m; i++){
    if(suit[i].mozi!=num[i].mozi) {
      printf("Not stable\n");
      break;
    }
  }
  if(i==m)printf("Stable\n");
  return 0;
}

