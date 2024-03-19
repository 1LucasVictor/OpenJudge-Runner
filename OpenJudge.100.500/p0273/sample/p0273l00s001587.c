#include <stdio.h>

int  a;
long long f1,f2,k;


int main(void) {
  f1=1;
  f2=1;
  scanf("%d",&a);
  if(a==0 || a==1){
  printf("1\n");
}
 else{

   for(int i=0;i<=a-2;i++){
     k=f1;
     f1 = f1+f2;
     f2=k;
   }

   printf("%d\n",f1);

 }
      	return 0;

}

