#include<stdio.h>
int main()
{
int n,s;
scanf("%d",&n);
if(n>=0 && n<=9)
{
if(n==2 || n==4|| n==5 || n==7 || n==9)      
{printf("hon\n");}
else if(n==0|| n==1|| n==6|| n==8)  
{printf("pon\n");} 
else
printf("bon\n");                   
}
if(n>=10 && n<=999)   
{
s=n%10;        
if(s>=0 && s<=9)
{
if(s==2 || s==4|| s==5 || s==7 || s==9)      
{printf("hon\n");}
else if(s==0|| s==1|| s==6|| s==8)  
{printf("pon\n");} 
else
{printf("bon\n");}                          
}   
return 0;    
}
 }