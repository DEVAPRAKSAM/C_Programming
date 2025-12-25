#include<stdio.h>
int main()
{
    int d,x,y,sum;
    d=11;
loop:
    if(d<=99)
    {
     x=d/10;   
     y=d%10;   
     sum=x+y;
      if(sum == 7)
      {
       printf("%d\n",d);
      }
     d=d+2;
     goto loop;
    }
}
