        #include<stdio.h>
         
        int main(){
         
          int D,N;
          scanf("%d%d",&D,&N);
          if(N==100){
          N++;
}
          switch(D){
            case 0:
              printf("%d",N);
              break;
            case 1:
              printf("%d",N*100);
              break;
            case 2:
              printf("%d",N*10000);
          }
         
          return 0;
        }