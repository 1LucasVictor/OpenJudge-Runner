#include<stdio.h>
#include<string.h>
#define T 50000
int main(){
  int n,q,time[T],i,k,alltime=0,flag=0;
  char name[100000][10];

  scanf("%d %d",&n,&q);
  for(i=0;i<n;i++){
    scanf("%s%d",name[i],&time[i]);
  }

  
  for(i=0;i<n;i++){
    if(flag==n)break;
    
    if(time[i]<=q && time[i]>=0){ 
      printf("%s %d\n",name[i], alltime+time[i]);
      alltime+=time[i];
      time[i]=-1;
      flag++;
    }
    else if(time[i]>q){
      alltime+=q;
      time[i]-=q;
    }
    if((i+1)==n) i=-1;
    
  }
  return 0;
}