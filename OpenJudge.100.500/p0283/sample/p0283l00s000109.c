#include<stdio.h>
#include<stdlib.h>

int r[8];
int c1[8];
int k;

void ppp(int *aq){
  int i,j;
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(aq[i]==j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}
    

int check(int* e,int f){
  int i;
  for(i=0;i<f;i++){
    if(e[i]==e[f]||(abs(e[i]-e[f])==f-i))return 0;
  }
  //  for(i=f+1;i<8;i++){
  // if(e[i]==e[f]||(abs(e[i]-e[f])==i-f))return 0;
  //}
  return 1;  
}

void search(int *a,int b){
  
  for(a[b]=0;a[b]<8;++a[b]){
    if(check(a,b)==1){
      if(b==7){
	if(k==2) if(a[r[0]]==c1[r[0]]&&a[r[1]]==c1[r[1]])ppp(a);
	if(k==3) if(a[r[0]]==c1[r[0]]&&a[r[1]]==c1[r[1]]&&a[r[2]]==c1[r[2]])ppp(a);
	if(k==4) if(a[r[0]]==c1[r[0]]&&a[r[1]]==c1[r[1]]&&a[r[2]]==c1[r[2]]&&a[r[3]]==c1[r[3]])ppp(a);
	if(k==5) if(a[r[0]]==c1[r[0]]&&a[r[1]]==c1[r[1]]&&a[r[2]]==c1[r[2]]&&a[r[3]]==c1[r[3]]&&a[r[4]]==c1[r[4]])ppp(a);
	if(k==6) if(a[r[0]]==c1[r[0]]&&a[r[1]]==c1[r[1]]&&a[r[2]]==c1[r[2]]&&a[r[3]]==c1[r[3]]&&a[r[4]]==c1[r[4]]&&a[r[5]]==c1[r[5]])ppp(a);
	if(k==7) if(a[r[0]]==c1[r[0]]&&a[r[1]]==c1[r[1]]&&a[r[2]]==c1[r[2]]&&a[r[3]]==c1[r[3]]&&a[r[4]]==c1[r[4]]&&a[r[5]]==c1[r[5]]&&a[r[6]]==c1[r[6]])ppp(a);
	if(k==8) if(a[r[0]]==c1[r[0]]&&a[r[1]]==c1[r[1]]&&a[r[2]]==c1[r[2]]&&a[r[3]]==c1[r[3]]&&a[r[4]]==c1[r[4]]&&a[r[5]]==c1[r[5]]&&a[r[6]]==c1[r[6]]&&a[r[7]]==c1[r[7]])ppp(a);
      }
      else search(a,b+1);
    }
  }
}



int main(){

  int i,j;
  int c2[8];

  for(i=0;i<8;i++){
    r[i]=-1;
    c1[i]=-1;
    c2[i]=-1;
  }

  scanf("%d",&k);

  for(i=0;i<k;i++){
    scanf("%d",&r[i]);
    scanf("%d",&c2[r[i]]);
    c1[r[i]]=c2[r[i]];
  }

  search(c2,0);
  
  return 0;
}

  
      

