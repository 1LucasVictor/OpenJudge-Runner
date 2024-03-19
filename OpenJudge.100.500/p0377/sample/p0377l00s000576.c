#include<stdio.h>
#include <memory.h>
int main(void){
int card[4][14],have,num,i=0,j=0;
char id;
memset(card,0,sizeof(card));
scanf("%d",&have);
for(i=0;i<have;i++){
scanf("%*c%c %d",&id,&num);
if(id=='S')
        card[0][num]=1;
else if(id=='H')
        card[1][num]=1;
else if(id=='C')
        card[2][num]=1;
else
        card[3][num]=1;
}


for(i=0;i<=3;i++){
 for(j=1;j<=13;j++){
if(i==0) id='S';
if(i==1) id='H';
if(i==2) id='C';
if(i==3) id='D';
  if(card[i][j]==0) printf("%c %d\n",id,j);
 }
}

}

