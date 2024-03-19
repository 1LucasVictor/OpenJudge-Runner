#include <stdio.h>
#include <string.h>

#define N 200000
#define M 1000

int main(){
  int a[N],n,time[M],t=0,q,i,head,tail,str;
  char in[N][10];
  scanf("%d %d\n",&n,&q);
  for(i=0; i<n; i++){
    //t=0;
    //while((in[i][t++]=getc(stdin))!=' ');
    scanf("%s %d\n",in[i],&a[i]);
  }
  /*for(i=0; i<n; i++){
    printf("%s %d\n",in[i],a[i]);
    }*/
  t=0;
  for(head=0,tail=n; head!=tail; ){
    if(a[head]<=q){
      t+=a[head];
      a[head]=0;
      printf("%s %d\n",in[head],t);
      head=(head+1)%N;
    }else{
      t+=q;
      a[head]-=q;
      a[tail]=a[head];
      str=strlen(in[head]);
      for(i=0; i<str; i++){
	in[tail][i]=in[head][i];
	in[head][i]=0;
      }
      tail=(tail+1)%N;
      head=(head+1)%N;
    }
  }
  
  return 0;
}

