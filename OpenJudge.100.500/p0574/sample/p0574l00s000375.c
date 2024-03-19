#include <stdio.h>
int main(int argc, char const *argv[]) {
  int s,s1,s2,s3,s4;
  scanf("%d",&s );
  s1=s/1000;
  s2=(s-s1*1000)/100;
  s3=(s-s1*1000-s2*100)/10;
  s4 =(s-s1*1000-s2*100-s3*10);

  if(s1==s2 || s2==s3 || s3 == s4){
    printf("Bad");
  }else{
    printf("Good" );
  }
  return 0;
}
