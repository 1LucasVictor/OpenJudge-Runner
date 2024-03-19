#include<stdio.h>
int main(){
   int X,Y;
   scanf("%d %d",&X,&Y);
   int i;
   for(i=0;i<=X;i++){

    int a = i * 2 + (X - i) * 4;
    if (a == Y) {
     
printf("Yes");
break;
    }
}
   if(i>X){
printf("No");
   }
   return 0;
}