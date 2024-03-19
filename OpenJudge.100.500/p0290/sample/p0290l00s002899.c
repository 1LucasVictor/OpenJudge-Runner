#include <stdio.h>
#include <stdlib.h>

int main(){
  int *a,n,i,j,k,key,*flag;

  scanf("%d",&n);
  a = (int *) malloc(n*sizeof(int) );
  flag = (int *) malloc(n*sizeof(int) );

  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    flag[i]=1;
  }

  /* 素数ではない数を探して「key」から数を減らす */
  key=n;
  for(i=2;i<10001;i++){
    
    for(j=0;j<n;j++){
      if(a[j]==i)flag[j]=0;
      
      if(flag[j]){
	if(a[j]%i==0){
	  flag[j]=0;
	  key--;
	}
      }
    }
    if(i!=2)i++;
  }

  
  
  printf("%d\n",key);

  return 0;
}

