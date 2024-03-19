typedef long long ll;
main(){
  ll n, d;scanf("%lld %lld", &n, &d);
  ll c=0;
  for(ll i=0;i<n;i++) {
    ll a, b;scanf("%lld %lld", &a, &b);
    ll r = a*a + b*b;
    if(r<=d*d)c++;
  }
  printf("%lld\n", c);
}