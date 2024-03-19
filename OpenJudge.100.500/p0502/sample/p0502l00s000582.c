#include<stdio.h>
int main(){ int i,n,b,c=0,a=0;
scanf("%d",&n);for(i=0;i<n;i++){scanf("%d",&b);if(b%2==0){c++;if(b%3==0||b%5==0){a++;}}}
puts(c==a?"APPROVED":"DENIED");              
}
