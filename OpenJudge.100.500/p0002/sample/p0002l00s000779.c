#include<stdio.h>
 
int main(void){
  int n;
  int s1,s2,s3;
  int temp;
  int i;
  
    scanf("%d",&n);

  for(i = 0;i < n;i++){
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1 < s2){
      temp = s1;
      s1 = s2;
      s2 = temp;
    }
    if(s1 < s3){
      temp = s1;
      s1 = s3;
      s3 = temp;
    }
    if(s1 * s1 == s2 *s2 + s3 * s3){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }

  return 0;
}