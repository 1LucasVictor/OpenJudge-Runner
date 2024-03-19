#include<stdio.h>
int main(void) {
    int a[4][13];
    int n,c,d,f;
    char e;
    for(int b=0;b<4;b++){
      for(int c=0;c<14;c++){
        a[b][c] = 0;
      }
    }
    scanf("%d\n",&n);
    for(int d=0;d<n;d++){
      scanf("%c %d\n",&e,&f);
      if(e == 'S') a[0][f-1] = 1;
      else if(e == 'H') a[1][f-1] = 1;
      else if(e == 'C') a[2][f-1] = 1;
      else if(e == 'D') a[3][f-1] = 1;
    }
    

    for(int i=0;i<4;i++){
      for(int j=0;j<13;j++){
        if(a[i][j] != 1){
          if(i == 0) printf("S %d\n",j+1);
          if(i == 1) printf("H %d\n",j+1);
          if(i == 2) printf("C %d\n",j+1);
          if(i == 3) printf("D %d\n",j+1);
        }
      }
    }
return 0;
}
