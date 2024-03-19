    #include<stdio.h>
    int main(){
      int x,y;
      scanf("%d%d",&x,&y);
      
      for (int c=0;c <= x;c++){
        int t =x-c;
        int asi = c*2+t*4;
        if(asi==y){
          printf("Yes");
          return 0;
        }
      }
        printf("No");
        return 0;
      }
      