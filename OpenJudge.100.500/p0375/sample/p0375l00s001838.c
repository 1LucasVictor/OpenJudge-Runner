#include<stdio.h>

int main(){
  int x,s,t;

   scanf("%d",&x);
   for (s=1;s<=x;s++){t=s;
if(s%3==0||s%10==3){printf(" %d",s);}
   else{while (1){t=t/10;
       if(t%10==3){printf(" %d",s);}
       else{break;}}}}
   printf("\n");
return 0;
}