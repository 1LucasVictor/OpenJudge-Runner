#include <stdio.h>
int main(){
   int a,i=0;
   int cnt_7,cnt_5;
   while(i<2){
	 scanf("%d\n",&a);
     if(a==7&&cnt_7==0)
       cnt_7++;
     else if(a==7&&cnt_7==1){
       printf("NO");
       return 0;
     }
     else if(a==5&&cnt_5==2){
       printf("NO");
       return 0;
     }
     else if(a==5&&cnt_5!=2){
       cnt_5++;
     }
     i++;
   }
     printf("YES");
}