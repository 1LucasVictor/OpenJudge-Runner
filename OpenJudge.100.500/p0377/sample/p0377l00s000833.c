#include<stdio.h>

 int main(){
     int i,n,S,GG,j;
     int Card[4][13]={0};
     char G,M[]="SHCD";

     scanf("%d",&n);

     for(i=0;i<n;i++){
             scanf(" %c %d",&G,&S);

             if(G=='S'){GG=0;}
             else if(G=='H'){GG=1;}
             else if(G=='C'){GG=2;}
             else if(G=='D'){GG=3;}

             Card[GG][S-1]=1;
             }

     for(i=0;i<4;i++){
            for(j=0;j<13;j++){
                    if(Card[i][j]==0){printf("%c %d\n",M[i],j+1);}
                    }
            }
     return 0;
     }
