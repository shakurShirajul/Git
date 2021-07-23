#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,r;
    scanf("%d",&n);
    if(n%2!=0)
    {
        i=round(n/2);
        printf("%d\n",i+1);
    }
    else if(n%2==0)
    {
        i=n/2;
        r=i+1;
        printf("%d %d\n",i,r);
    }
    return 0;
}
