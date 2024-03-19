#include <stdio.h>
#include <limits.h>
int up(int data[], int ans[]);
int down(int data[], int ans[]);
int first(int data[], int ans[], int);

main(){
  int n, data[5000], ans[3];
  int i;

  while(1){
    scanf("%d", &n);
    if(n==0) break;
    for(i=0;i<n;i++){
      scanf("%d", &data[i]);
    }
    first(data, ans, n);
    printf("%d\n", ans[0]);
  }
  return 0;
}


int up(int data[], int ans[]){
  int i;
  int temp;
  int max=INT_MIN;
  int sum=0;
  for(i=ans[2];i<=ans[1];i++){
    sum+=data[i];
    if(max<=sum){
      max=sum;
      temp=i;
    }
  }
  ans[1]=temp;
  if(ans[0]==max) return 0;
  else{
    ans[0]=max;
    down(data,ans);
  }
}


int down(int data[], int ans[]){
  int i;
  int temp;
  int max=INT_MIN;
  int sum=0;
  for(i=ans[1];i>=0;i--){
    sum+=data[i];
    if(max<=sum){
      max=sum;
      temp=i;
    }
  }
  ans[2]=temp;
  if(ans[0]==max) return 0;
  else{
    ans[0]=max;
    up(data,ans);
  }
}


int first(int data[], int ans[], int n){
  int max1=INT_MIN, max2=INT_MIN, temp1, temp2, i, sum;

  ans[0]=INT_MIN;
  ans[1]=n-1;
  ans[2]=0;
  sum=0;
  for(i=ans[2];i<=ans[1];i++){
    sum+=data[i];
    if(max1<=sum){
      max1=sum;
      temp1=i;
    }
  }
  sum=0;
  
  for(i=ans[1];i>=0;i--){
    sum+=data[i];
    if(max2<=sum){
      max2=sum;
      temp2=i;
    }
  }
   
  if(temp1>=temp2){
    ans[1]=temp1;
    ans[0]=max1;
    down(data, ans);
  }
  else{
    ans[2]=temp2;
    ans[0]=max2;
    up(data, ans);
  }
}