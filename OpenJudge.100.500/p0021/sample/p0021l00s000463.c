#include <stdio.h>
#include <limits.h>
int up(int data[], int ans[]);
int down(int data[], int ans[]);

main(){
  int n, data[5000], ans[3];
  int i;

  while(1){
    scanf("%d", &n);
    if(n==0) break;
    for(i=0;i<n;i++){
      scanf("%d", &data[i]);
    }
    ans[0]=INT_MIN;
    ans[1]=n-1;
    ans[2]=0;
    up(data,ans);
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
    if(max<=ans[0]){
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