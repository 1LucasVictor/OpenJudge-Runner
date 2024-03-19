#include<stdio.h>
int main(void){
int num[3],i,j,key;
scanf("%d %d %d",&num[0],&num[1],&num[2]);
for(i=0;i<3;i++){if(num[i]<1||num[i]>10000) return 0;}
for(i=1;i<3;i++){
key=num[i];
for(j=i-1;j>=0;j--){
if(key>=num[j]){
num[j+1]=key;
break;
}
else{
num[j+1]=num[j];
} }
if(j<0){
num[0]=key;
}}
for(i=0;i<3;i++){
printf("%d",num[i]);
if(i<=1)
printf(" ");
}
printf("\n");
return 0;
}