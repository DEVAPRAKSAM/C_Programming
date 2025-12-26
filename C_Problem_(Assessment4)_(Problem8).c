#include<stdio.h>
int main()
{
    int d,x,y,sum;
    d=10;
loop:
    if(d<=98)
    {
     x=d/10;   
     y=d%10;   
     sum=x+y;
      if(sum==6)
      {
       printf("%d\n",d);
      }
     d=d+2;
     goto loop;
    }
}
