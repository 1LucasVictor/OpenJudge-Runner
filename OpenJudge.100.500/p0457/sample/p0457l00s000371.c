#include <stdio.h>

typedef long long int ll;

int main(void)
{
  	ll	n;
  	ll	m;
  	ll	k;
  	ll	a[200002];
  	ll	b[200002];
  	ll	i;
  	ll	j;
  	ll	cnt;
  
  	scanf("%lld %lld %lld\n", &n, &m, &k);
  	for(i=0LL; i<n; i++)
    {
      	scanf("%lld", &a[i]);
    }
    a[n] = 100000002LL;
  	for(j=0LL; j<m; j++)
    {
      	scanf("%lld", &b[j]);
    }
    b[m] = 100000002LL;
  
  	i = 0LL;
  	j = 0LL;
  	cnt = 0LL;
  	while(k > 0LL)
    {
      	if(i >= n)
        {
          	if(j >= m)
            {
              	break;
            }
          	else
            {
              	k = k - b[j];
              	if(k<0)
              	    break;
              	j++;
              	cnt++;
            }
        }
      	if(j >= m)
        {
          	if(i >= n)
            {
              	break ;
            }
          	else
            {
              	k = k - a[i];
              	if(k<0)
              	    break;
              	i++;
              	cnt++;
            }
        }
      	if(a[i] < b[j])
        {
          	k = k - a[i];
          	if(k<0)
          	    break;
          	i++;
          	cnt++;
        }
      	else
        {
          	k = k - b[j];
          	if(k<0)
          	    break ;
          	j++;
          	cnt++;
        }
    }
  	printf("%lld", cnt);
  	return (0);
}