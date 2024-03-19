#include<stdio.h>
 
int main(){
 
int a,b,n,l,i,j;
 
for(i=0;i<201;i++){
 

 
if(scanf("%d %d",&a,&b)==2){
 
n=a+b;
 
for(j=0;n>0;j++){
n=n/10;
l++;
}
printf("%d\n",l);
l=0;
}

else{
break;
}
 


}
 
 
return 0;
}