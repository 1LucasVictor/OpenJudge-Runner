#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h> 
typedef unsigned long long ll;
#define length 100000   //10万
#define kw_len 10
ll factor[300];
ll memory[300]; 
/*素朴法で計算
factorは必ずmemset(factor,0,sizeof(factor));
グローバルであるmemoryに個数を書き込む
memory配列の走査にはfactorの要素を使う*/
void primefac(ll num){
    int i = 0,kosuu=0;
    while(*(factor+i) != 0){
        while(num % *(factor+i)==0){
            num /= *(factor+i);
            memory[*(factor+i)] +=1;
        }
        if(num==1)break;
        i++;
    }
}
/*グローバルにあるfactorに素数書き込む.個数を返すので配列は-1しろ*/
int elast(ll number){    
    ll tmp=0;
    int flag=0;
    *factor = 2;
    for(int i=3;i <= number;i++){
        flag=0;
        for(int j=0;j <= tmp ;j++){
            if(i % (*(factor+j)) == 0){
                flag=1;
                break;
            }
        }
        if(flag)continue;
        tmp += 1;
        *(factor+tmp) = i;
    }
        return tmp+2;
}

int compare(const int*a,const int *b){
    if(*a<*b)
      return -1;
    else if(*a>*b)
      return 1;
    return 0;
}

ll nCr(int n,int r){
  ll val=1;
  int i;
  if(r==0)return 1;
  for(i=0;i<n-r;i++){
		val *= (n-i);
		val /= (i+1);
	}
  return val;
}

ll nPr(int n,int r){
  ll val=1;
  int i;
  for(i=0;i<r;i++){
    val *= (n-i);
  }
  return val;
}
/*
qsort(array,length,sizeof(int),(int(*)(const int*, const int*))compare);
使う時これをコピペ
*/
int main(){
    int array[length];
    int N,K,i,j,A,B;
    int *inp;
    char *chp;
    ll sum=0;
    scanf("%d%d",&A,&B);
    if((A>0)&&(B>0)){
        if((10>A)&&(10>B)){
            printf("%d",A*B);
            return 0;
        }
    }
    printf("%d",-1);

    return 0;
}
