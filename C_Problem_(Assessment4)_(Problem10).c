#include<stdio.h>
int main()
{
    int d,sum;
    d=71;
    sum=0;
loop:
    if(d<=79)
    {
     sum=sum+d;
     d=d+2;      
     goto loop;
    }
    printf("%d",sum);
}
