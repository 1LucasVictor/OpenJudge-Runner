#include<stdio.h>
struct proc{
  char name[11];
  int time;
};
main(){
  int n,q;
  int i;
  int total=0,done=0;
  scanf("%d %d",&n,&q);
  struct proc p[n];
  for(i=0;i<n;i++){
    scanf("%s %d",p[i].name,&p[i].time);
  }
  while(done<n){
    for(i=0;i<n;i++){
      if(0<p[i].time&&p[i].time<=q){
        total+=p[i].time;
        printf("%s %d\n",p[i].name,total);
        p[i].time=0;
        done++;
      }else if(p[i].time>0){
        total+=q;
        p[i].time-=q;
      }
    }
  }
}