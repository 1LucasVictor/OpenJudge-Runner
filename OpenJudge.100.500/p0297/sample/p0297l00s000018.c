#include<stdio.h>
#include<string.h>
struct date{
  char name[11];
  int time;
  char sname[11];
  int stime;
  char Ansname[11];
  int Anstime;
};


int main(){
  int n,q,i,str,tmp,tmp2,j,k=0;
  scanf("%d%d",&n,&q);
  struct date tn[n+1];
  for(i=0;i<n;i++){
    scanf("%s ",tn[i].name);
     scanf("%d",&tn[i].time);
    //  printf("%s %d\n",tn[i].name,tn[i].time);
  }
  tmp2=n;
  i=0;
  while(1){
    tn[i].stime=(tn[i].time-q);
    if(tn[i].stime>0){
      tn[i].time=0;
      tn[tmp2].time=tn[i].stime;
      strcpy(tn[i].sname,tn[i].name);
      strcpy (tn[i].name," ");
      strcpy(tn[tmp2].name,tn[i].sname);
      str+=q;
      if(tmp2==n){
	tmp2=0;
      }
      else{
	tmp2++;
      }
      if(i==n){
	i=0;
      }
      else{
	i++;
      }
      
    }
    else{
      str+=tn[i].time;
      tn[k].Anstime=str;
      tn[i].time=0;
      strcpy(tn[k].Ansname,tn[i].name);
      k++;
      strcpy ( tn[i].name," ");
      if(i==n){
	i=0;
      }
      else{
	i++;}
    }
    if(k==n){
      break;
    }

  }
  for(j=0;j<n;j++){
    printf("%s %d\n",tn[j].Ansname,tn[j].Anstime);
  }
  return 0;
}

