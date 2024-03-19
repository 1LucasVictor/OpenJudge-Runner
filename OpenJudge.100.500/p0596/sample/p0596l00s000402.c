#include<stdio.h>

void rm(int array[],int i,int k){
  int j;
  for(j=i;j<k-1;j++){
    array[j]=array[j+1];
  }
  array[k]=0;
  array[k+1]=0;
}

int main(void){
  char s[100001];
  scanf("%s",s);
  int t=0;
  int i;
  while(1){
    if(s[t]=='\0')break;
    t++;
  }
  int array[t];
  for(i=0;i<t;i++){
    array[i]=s[i]-48;
  }
  int k=t;
  int ans=0;
  int count=0;
  while(1){
    count=0;
    for(i=0;i<k-1;i++){
      if(array[i]==0 && array[i+1]==1){
        rm(array,i,k);
        k-=2;
        count+=1;
        ans+=2;
      }
      else if(array[i]==1 && array[i+1]==0){
        rm(array,i,k);
        k-=2;
        count+=1;
        ans+=2;
      }
    }
    if(k==0)break;
    if(count==0)break;
  }
  printf("%d\n",ans);
  return 0;
}
