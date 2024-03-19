#include<stdio.h>

int main()
{
  int card[4][13];
  int i,j,n,k,c,a;
  char b;
  
 for(i=0;i<4;i++){
          for(j=0;j<13;j++){
                   card[i][j]=0;
                            }
                  }
  
 scanf("%d",&n);

 for(k=0;k<=n;k++){ 
               scanf("%d",&a);
               scanf("%c %d",&b,&c);
               if(b=='S')i=0;
               if(b=='H')i=1;
               if(b=='C')i=2;
               if(b=='D')i=3;
               
               card[i][c-1]=1;
                  }

 for(i=0;i<4;i++){
                  for(j=0;j<13;j++){
                                    if(card[i][j]==0){
                                                      if(i==0)printf("S %d\n",j+1);
                                                      if(i==1)printf("H %d\n",j+1);
                                                      if(i==2)printf("C %d\n",j+1);
                                                      if(i==3)printf("D %d\n",j+1);
                                                      } 
                                    }
                 }

return 0;
}



