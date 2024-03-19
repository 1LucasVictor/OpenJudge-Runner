int main (){
 int H , N ;
 scanf ( "%d%d" ,& H ,& N );
 for ( int i =0; i < N ; i ++){
 int A ;
 scanf ( "%d" ,& A );
　H -= A ;

 }
　if ( H <=0) puts ( "Yes" );
　else puts ( "No" );
}