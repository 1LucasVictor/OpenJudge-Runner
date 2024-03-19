#include <stdio.h>

int main(void){
   int HP,atkN,i,j,tmp;
   scanf("%d%d",&HP,&atkN);
   int KM_dmg[atkN];

   for(i=0;i<atkN;i++)
      scanf("%d",&KM_dmg[i]);


   //Sort
   for(i=0;i<atkN-1;i+=0){
      if(KM_dmg[i] < KM_dmg[i+1]){
         tmp=KM_dmg[i+1];
         KM_dmg[i+1] = KM_dmg[i];
         KM_dmg[i] = tmp;
         i=0;
      } else { i++;}
   }

   for(i=0;i<atkN;i++){
      HP=HP-KM_dmg[i];
      if(HP<1) {printf("Yes\n"); return 0;}
   }

   printf("No\n");
   return 0;
}