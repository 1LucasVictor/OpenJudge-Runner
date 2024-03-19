#include <stdio.h>
#include <stdlib.h>
int dev(int a);
int main()
 
 {
 
   int n;
scanf("%d",&n);
 
 
dev(n);
 
 }
 
int dev(int a){
    int r,count;
while(a>0){
    r=a%10;
    if(r==7){
        count=1;;
        break;
    }else{
    count=0;
    a=a/10;
    }
 
}if(count==0)
printf("No");
else
    printf("Yes");
}