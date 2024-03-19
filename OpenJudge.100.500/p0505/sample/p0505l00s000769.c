        #include <stdio.h>
        int main(){
          int H,N,i;
          int z;
          scanf("%d %d",&H,&N);
          int list[N];
          for(i=0;i<N;i++){
            scanf("%d",list+i);
          }
          for(i=0;i<N;i++){
            z+=list[i];
          }
          if(H-z>0) printf("No");
          else printf("Yes");


        return 0;}
