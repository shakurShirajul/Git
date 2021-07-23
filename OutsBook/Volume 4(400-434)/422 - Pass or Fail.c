#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n>=33)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Fail\n");
        }
    }
    return 0;
}
