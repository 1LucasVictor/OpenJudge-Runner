#include<stdio.h>

int main(void){

int x;

while(scanf("%d",&x) != EOF){

int count=0;

for(int i= 0; i<=9; i++){
   for(int j = 0; j<= 9; j++){
       for(int k = 0; k<=9; k++){
           for(int l = 0; l<=9; l++){
              if(i+j+k+l==x){
                 count++;
              }
}
}
}
}
printf("%d\n",count);
}
}
