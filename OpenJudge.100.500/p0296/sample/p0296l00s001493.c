#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef int Item;
static Item *s;
static int N;
void STACKinit(int);
int STACKempty(void);
void STACKpush(Item);
Item STACKpop(void);
int main(void){
  char a[300];
  int i=0;
  scanf("%[^\n]",a);
  int n=strlen(a);
  STACKinit(214748364);
  while(STACKempty()!=0){
    for(i=0;i<n;i++){
      if(a[i]=='+'){
	STACKpush(STACKpop()+STACKpop());
      }
      if(a[i]=='-'){
	int l=STACKpop();
	STACKpush(STACKpop()-l);
      }
      if(a[i]=='*'){
	STACKpush(STACKpop()*STACKpop());
      }
      if((a[i]>='0')&&(a[i]<='9')){
	STACKpush(0);
      }
      while((a[i]>='0')&&(a[i]<='9')&&(a[i]!=' ')){
	STACKpush(10*STACKpop()+(a[i++]-'0'));
      }
    }
  }
  printf("%d\n",STACKpop());
  return 0;
}
void STACKinit(int maxN){
  s=malloc(maxN*sizeof(Item));
  N=0;
}
int STACKempty(void){
  return N==0;
}
void STACKpush(Item item){
  s[N++]=item;
}
Item STACKpop(void){
  return s[--N];
}