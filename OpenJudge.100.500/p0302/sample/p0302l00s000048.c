#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int toval( char a ){
  if( a == 'A' ) return 1;
  if( a == 'C' ) return 2;
  if( a == 'G' ) return 3;
  if( a == 'T' ) return 4;
  return 0;
}  

#define TS 60000

struct _htd{
  char s[13]; // str
  struct _htd * n; // next
};
typedef struct _htd HTD;

int main(){

  int i, j;
  int n;
  int hash, found;
  char cmd[7], str[13];
  HTD * ht[TS]; // hashTable
  HTD * tp; // table pointer

  memset( ht, '\0', sizeof(ht) );

  scanf( "%d\n", &n );
  

  for( i=0; i<n; i++ ){
    scanf( "%s %s", cmd, str );

    if( cmd[0] == 'i' ){ // insert
      
      // calc hash
      hash = 0;
      for( j=0; j<strlen(str); j++ )
        hash += toval(str[j])*pow(4,j);
      hash = hash%TS;

      // find avaliable space
      if( ht[hash] == NULL ){
        ht[hash] = (HTD*)malloc(sizeof(HTD));
        tp = ht[hash];
      }else{
        tp = ht[hash]->n;
        while( tp != NULL ) tp = tp->n;
        tp->n = (HTD*)malloc(sizeof(HTD));
      }

      strcpy( tp->s, str );

      //printf( " %d[%d+%d] <- %s\n", (hash+j)%TS, hash, j, str );
    }

    if( cmd[0] == 'f' ){ // find

      // calc hash
      hash = 0;
      for( j=0; j<strlen(str); j++ )
        hash += toval(str[j])*pow(4,j);
      hash = hash%TS;

      // find item
      found = 0;
      if( ht[hash] != NULL ){
        tp = ht[hash];
        while( tp != NULL ){
          if( strcmp( tp->s, str) == 0 ){
            found++;
             break;
          }
          tp = tp->n;  
        }
      }
      
      
      if( found ) printf( "yes\n" );
      else printf( "no\n" );
    }

  }



  return 0;

}
