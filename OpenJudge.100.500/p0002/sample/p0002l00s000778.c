#include <stdio.h>
int main(){
  int n,i,j,s[3],max;
  scanf("%d",&n);
  for(i = 0;i < n;i++){
    scanf("%d %d %d",&s[0],&s[1],&s[2]);
    max = s[0];
    for(j = 1;j<3;j++){
      if(max < s[j]){
	max = s[j];
      }
    }
    for(j = 0;j<3;j++){
      if(max == s[j]){
	s[j] = 0;
	break;
      }
    }
    if(max == sqrt(pow(s[0],2) + pow(s[1],2) + pow(s[2],2))){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return(0);
}
    