        #include<stdio.h>
        int main(){
          int a[5];
          int i,k;
          
          for(i=0;i<5;i++)
            scanf("%d",&a[i]);
          scanf("%d",&k);
          
          if(a[4]-a[0]>k){
            printf(":(");
          }else{
            printf("Yay!");
          }
          
          return 0;
        }