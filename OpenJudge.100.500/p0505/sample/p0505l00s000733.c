#include <stdio.h>

int main(void){
   int HP,atkN,i,j,tmp,max_index;
   scanf("%d%d",&HP,&atkN);
   unsigned short int KM_dmg[atkN];
   unsigned short int bukket[40001];

   for(i=0;i<atkN;i++)
      scanf("%hu",&KM_dmg[i]);


   //Sort
   for(i=0;i<atkN;i++)
      bukket[KM_dmg[i]]++;
   
   for(i=0,j=0;i<40001;i+=0){
      if(bukket[i]>=1){
         KM_dmg[j] = i;
         j++;
         bukket[i]--;
      } else { i++; }

      if(j==atkN) break;
   }
   
   for(i=0;i<atkN;i++){
      HP=HP-(int)KM_dmg[atkN-i-1];
      if(HP<1) {printf("Yes\n"); return 0;}
   }
   
   printf("No\n");
   return 0;
}
