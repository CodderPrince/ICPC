//prince

#include <stdio.h>

int main() 
{
    
    unsigned long long int n,k;
    scanf("%llu %llu", &n, &k);
    
    unsigned long long int primes[k],i,j;
    for (i = 0; i < k; i++) 
    {
        scanf("%llu", &primes[i]);
    }

    unsigned long long int count = 0;
       
    for (i = 1; i <= n; i++) 
    {
        unsigned long long int divisible = 0;
        
        for (j = 0; j < k; j++) 
        {
            if (i % primes[j] == 0) 
            {
                divisible = 1;
                break;
            }
        }
       
        if (divisible) 
        {
            count++;
        }
    }
    printf("%llu\n", count);
    
    return 0;
}
