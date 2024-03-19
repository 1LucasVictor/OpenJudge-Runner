#include <stdio.h>
#include <stdlib.h>
int main ( void ){
  int n;
  int *a;
  int hoge,piyo;
  int flag;
  flag = 0;
  scanf ("%d",&n);
  a = malloc ( n * sizeof ( int ));
  for ( hoge = 0 ; hoge < n ; hoge++ ){
    scanf ("%d",&a[hoge]);
    for ( piyo = 0 ; piyo < hoge ; piyo++ ){
      if ( a[hoge] == a[piyo] ) flag = 1;
      else flag = 0;
    }
  }
  if ( flag == 0 ) printf("YES\n");
  else printf("NO\n");

  return 0;
}
