    #include<stdio.h>
     
    int main(void){
        int X;
        scanf("%d", &X);
        if( (X<-40) || (X> 40) ){
          printf("input temperature is out of range!\n");
          return 1;
        }else if( X < 30 ){
          printf("No");
        }else{
          printf("Yes");
        }
        return 0;
    }