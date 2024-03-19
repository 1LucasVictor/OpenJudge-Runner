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
  	ll  ki;
  	ll  kj;
  	ll  tmp;
  
  	scanf("%lld %lld %lld\n", &n, &m, &k);
  	for(i=0LL; i<n; i++)
    {
      	scanf("%lld", &a[i]);
    }
    a[n] = 1000000002LL;
  	for(j=0LL; j<m; j++)
    {
      	scanf("%lld", &b[j]);
    }
    b[m] = 1000000002LL;
  
    i = 0LL;
    tmp = k;
    while(tmp > 0LL)
    {
        tmp = tmp - a[i];
        if(tmp < 0LL || i >= n)
            break ;
        i++;
    }
    ki = i;

    j = 0LL;
    tmp = k;
    while(tmp > 0LL)
    {
        tmp = tmp - b[j];
        if(tmp < 0LL || j >= m)
            break ;
        i++;
    }
    kj = j;

  	i = 0LL;
  	j = 0LL;
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
              	if(k<0LL)
              	    break;
              	j++;
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
              	if(k<0LL)
              	    break;
              	i++;
            }
        }
      	if(a[i] < b[j])
        {
          	k = k - a[i];
          	if(k<0LL)
          	    break;
          	i++;
        }
      	else
        {
          	k = k - b[j];
          	if(k<0LL)
          	    break ;
          	j++;
        }
    }
    if(kj > ki && kj > i + j)
        printf("%lld", kj);
    else if(ki > kj && ki > i + j)
        printf("%lld", ki);
    else
      	printf("%lld", i + j);
  	return (0);
}