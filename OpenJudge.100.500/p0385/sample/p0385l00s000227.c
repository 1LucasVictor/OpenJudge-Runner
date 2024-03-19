#include<stdio.h>

int main(){

  char a[100][1000];

  int i=0;

  while(1){

    fgets(a[i],1200,stdin);
 
    if(a[i][0]=='0'&&a[i][1]=='\n')

      break;

    i++;

  }

  int s,t;

  int b[i];

  for(s=0;s<=i;s++){

    b[s]=0;

    for(t=0;a[s][t]!='\n';t++){

      b[s]+=a[s][t]-'0';

    }

  }

  int c;

  for(c=0;c<=i-1;c++){

    printf("%d\n",b[c]);

  }

  return 0;

}