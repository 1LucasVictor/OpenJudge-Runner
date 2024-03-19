#include<stdio.h>
main(){
  int i,time=0,shori,N,Q,head=0,tail,n[100000],q[1000],pname[100000];
  char name[100000];

  scanf("%d%d",&N,&Q);
  tail = N-1;
  shori = N;
  for(i=0;i<N;i++){
    scanf(" %c%d %d",&name[i],&pname[i],&q[i]);
  }
  while(shori>0){
    if(q[head]>Q){
      tail++;
      q[tail]=q[head]-Q;
      name[tail]=name[head];
      pname[tail]=pname[head];
      time+=Q;
      head++;
      
    }
    else {
      time+=q[head];
      printf("%c%d %d\n",name[head],pname[head],time);
      head++;
      shori--;
    }}
  return 0;
}