#include <stdio.h>
int main(void){
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if(a<b) {
       if(c<a){
           printf("%d %d %d\n",c,a,b);
       }
       else if(b<c){
           printf("%d %d %d\n",a,b,c);
       }
       else{
           printf("%d %d %d\n",a,c,b);
     } }
   else if(b<a){
       if(c<b){
           printf("%d %d %d\n",c,b,a);
       }
       else if(a<c){
           printf("%d %d %d\n",b,a,c);
       }
       else{
           printf("%d %d %d\n",b,c,a);
   }}
   else if(a<c){
       if(b<a){
           printf("%d %d %d\n",b,a,c);
       }
       else if(b<c){
           printf("%d %d %d\n",a,b,c);
       }
       else{
           printf("%d %d %d\n",a,c,b);
   }}
   else if(c<a){
       if(b<c){
           printf("%d %d %d\n",b,c,a);
       }
       else if(a<b){
           printf("%d %d %d\n",c,a,b);
       }
       else{
           printf("%d %d %d\n",c,b,a);
   }}
  else if(b<c){
       if(a<b){
           printf("%d %d %d\n",a,b,c);
       }
       else if(c<a){
           printf("%d %d %d",b,c,a);
       }
       else{
           printf("%d %d %d\n",b,a,c);
   }}
   else if(c<b){
       if(a<c){
           printf("%d %d %d\n",a,c,b);
       }
       else if(b<a){
           printf("%d %d %d\n",c,b,a);
       }
       else{
           printf("%d %d %d\n",c,a,b);
   }}
   return 0;
   }
