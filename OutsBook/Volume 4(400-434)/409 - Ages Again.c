#include<stdio.h>
int main()
{
    long int a,d,f;
    while(scanf("%ld",&a)!=EOF)
    {
        d=a/5;
        f=(a-d);
        printf("%ld %ld\n",d,f);
    }
    return 0;
}
