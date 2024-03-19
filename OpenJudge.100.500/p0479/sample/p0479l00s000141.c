#include<stdio.h>

int main(){
 
  int n;
  int a[200000];
  int b[200000];
  int count;
  
  scanf("%d",&n);
  
  for(int i=0;i<n;i++) {
	scanf("%d",&a[i]);
    if(a[i]==NULL) a[i] = -1;
  }
  for(int i=0;i<n;i++){
    count = 0;
    for(int j=0;j<n;j++){
     if(i!=j){
       if(a[j] == a[i]+1) count++;
     }
    }
    b[i]=count;
  }
    
  for(int i=0;i<n;i++) printf("%d\n",b[i]);
  
  return 0;
}