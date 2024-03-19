#include <stdio.h>

int main(){
  int j,i,n,s[50],count,z,c=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&s[i]);
  }

  for(i=0;i<n;i++){
    count = 0;
    for(j=2;j<=s[i];j++){
      if( s[i]%j == 0){
	count++;
        if(count == 2){
	  c++;
	  break;
	}
      }
    }
  }
  z = n-c;
    printf("%d\n",z);
  return 0;
}

