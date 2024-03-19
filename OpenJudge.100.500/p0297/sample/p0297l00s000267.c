#include<stdio.h>
#include<string.h>
#define N 100000

int main(){
  int n, q, time[N], i, j, sumT=0, T;
  char name[N][10], cpyname[10];

  scanf("%d%d", &n, &q);
  for(i=0; i<n; i++){
    scanf("%s%d", name[i], &time[i]);
  }

  i=0;
  while(n > 0){
    T = time[i] - q;
    if(T > 0){
      sumT = sumT + q;
      strcpy(cpyname, name[i]);

      for(j=0; j<n-1; j++){
        time[j] = time[j+1];
        strcpy(name[j], name[j+1]);
          }

      time[n-1] = T;
      strcpy(name[n-1], cpyname);
    }

    else if(T == 0 || T < 0){
      sumT = sumT + time[i];
      strcpy(cpyname, name[i]);

      if(n > 0){
      for(j=0; j<n-1; j++){
        time[j] = time[j+1];
        strcpy(name[j], name[j+1]);
      }

      n = n-1;
      }

      printf("%s %d\n", cpyname, sumT);
    }
  }

  return 0;
}
