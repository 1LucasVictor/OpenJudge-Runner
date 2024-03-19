#include<stdio.h>
int main(void){
 int h,n;
 scanf("%d%d",&h,&n);
 int skill[n];
 for(int i=0;i<n;i++){
     scanf("%d",&skill[i]);
 }
 int sum=0;
 for(int i=0;i<n;i++){
     sum+=skill[i];
 }
 if(sum>=h){
     printf("Yes");
 }else{
     printf("No");
 }
 return 0;
}
