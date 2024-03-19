#include<stdio.h>
int main(){
int x,y,i;
int R[100000];


scanf("%d %d",&x,&y);

if(x==y){
 printf("%d",x);

}else if(x>y){

  R[0]=y;
  R[1]=x%y;

 for(i=2;i<x;i++){
 if(R[i-1]==0){
  printf("%d",R[i-2]);
  break;
 }else if(R[i-1]==1){
  printf("1");
  break;
 }else{
  R[i]=R[i-2]%R[i-1];
 }
}






}else if(x<y){


  R[0]=x;
  R[1]=y%x;

 for(i=2;i<y;i++){
 if(R[i-1]==0){
  printf("%d",R[i-2]);
  break;
 }else if(R[i-1]==1){
  printf("1");
  break;
 }else{
  R[i]=R[i-2]%R[i-1];
 }
}



}




return 0;
}