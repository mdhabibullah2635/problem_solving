# include <stdio.h>
int main(){
    int sum = 0;
    int i;
    for(i=1; i<=5; i=i+1)
    {
        sum += i;
    }
    printf("%d",sum);
    return 0;
}

//  type_2
#include <stdio.h>
int main() 
{
    long long int sum=0;
    int i;
    int n;
    scanf("%d",&n);
    for (i=1; i<=n; i=i+1)
    {
        sum += i;
    }
    printf("%lld",sum);
    return 0;
}
