    #include <stdio.h>
    int main(){
      int a[2]={0,0,0};
      int flag_A=0;
      int flag_B=0;
      //in
      scanf("%d %d %d",&a[0],&a[1],&a[2]);
      //read
      for(int n=0;n<3;n++){
        if(a[n]==5) flag_A++;
        else if(a[n]==7) flag_B++;
      }
      //out
      if(flag_A==2&&flag_B==1) printf("YES\n");
      else printf("NO\n");
    }