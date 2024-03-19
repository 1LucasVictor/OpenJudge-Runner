#include<stdio.h>
int main(){
    int a  ;
    scanf("%d",&a);
    int x , y = a , i , count = 0  ;
    for(i = 0 ; i <3 ; i++){
     x = y%10 ;
     y = y /10 ;
     if(x ==1 ){
        count ++;
     }

    }
    printf("%d",count);


}
