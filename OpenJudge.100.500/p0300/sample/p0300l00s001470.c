#include<stdio.h>
int main(void){
   int a[10],b[10];
   int i,j,num,key,found=0;
   scanf("%d",&num);
   for(i=0;i<num;i++){
   scanf("%d",&a[i]);}
   scanf("%d",&key);
   for(j=0;j<key;j++){
   scanf("%d",&b[j]);}
   for(i=0;i<num;i++){
   for(j=0;j<key;j++){
   if(b[j]==a[i]){
   found++;
}}}
   printf("%d",found);

return 0;
}