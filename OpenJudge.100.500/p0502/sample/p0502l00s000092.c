 #include <stdio.h>
 int main (void){
int a[10000],N;
int b = 0;
scanf("%d",&N);
for(int i=0;i<N;i++){
scanf("%d",&a[i]);
 }
 for(int k=0;k<N;k++){
     if(a[k]%2==0){
         if(a[k]%3!=0&&a[k]%5!=0){
         printf("DENIED");
         b=1;
         break;
         }
     }
 }
 if(b==0){
     printf("APPROVED");
 }
 }