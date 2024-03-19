#include <stdio.h>

int n,Tn,w;
int wArray[100000];

int check(long long P){
  int i=0,j;
  for(j=1;j<=Tn;j++){
    int s=0;
    while(s+wArray[i]<=P){
      s+=wArray[i];
      i++;
      if(i==n){
        return n;
      }
    }
  }
  return i;
}

int calc(){
    long long left = 0;
    long long right = 100000 * 10000;
    while(right-left>1){
        long long int mid = (left+right)/2;
        int v = check(mid);
        if(v<n){
            left = mid;
        }else{
            right = mid;
        }
  }
  return right;
}

int main() { 
    
    scanf("%d%d",&n,&Tn);

    for (int i=0;i<n;i++){
        scanf("%d", &wArray[i]);
        w += wArray[i];
    }

    long long ans = calc();
    printf("%d\n",ans);
    return 0;
}
