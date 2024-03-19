#include<stdio.h>
#define N 10000
int main(){
  int i,j,count = 0,count1 = 0,count2 = 0,n,q,S[N],T[N],h,k;

  scanf("%d",&n);

  for(i = 0;i < n;i++){
    scanf("%d",&S[i]);
  }

  scanf("%d",&q);

  for(i = 0;i < q;i++){
    scanf("%d",&T[i]);
  }

  for(i = 0;i < n;i++){
    for(j = 0;j < q;j++){
      if(S[i] == T[j]){
	count++;
    }
    }
  }
  for(i = 0;i < n;i++){
    for(j = i+1;j < q;j++){
      if(S[i] == S[j]){
	for(h = 0;h < n;h++){
	  for(k = 0;k < q;k++){
	    if(S[h] == T[k]){
	      count--;
	    }
	  }
	}
      }
    }
  }

for(i = 0;i < n;i++){
    for(j = i+1;j < q;j++){
      if(T[i] == T[j]){
	for(h = 0;h < n;h++){
	  for(k = 0;k < q;k++){
	    if(S[h] == T[k]){
	      count--;
	    }
	  }
	}
      }
    }
  }
	  printf("%d\n",count);

  return 0;
}