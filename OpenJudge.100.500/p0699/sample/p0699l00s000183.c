//A - 和風いろはちゃんイージー / Iroha and Haiku (ABC Edition)
#include<stdio.h>
int main(int argc, char const *argv[]) {
  int a,b,c;
  int flag5=2;
  int flag7=1;

  scanf("%d %d %d",&a,&b,&c);

 if(a==5){
   flag5 = flag5 -1;
 }else if(a==7){
   flag7 = flag7 - 1;
 }

 if(b==5){
    flag5 = flag5 -1;
 }else if(b==7){
    flag7 = flag7 -1;
 }

 if(c==5){
   flag5 = flag5 -1;
 }else if(c==7){
   flag7 = flag7 -1;
 }

 if(flag5==0 && flag7==0){
   printf("YES\n");
 }else{
   printf("NO\n");
 }

  return 0;
}
