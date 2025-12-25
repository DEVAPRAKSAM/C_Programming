#include<stdio.h>
int main(){
    int d=6,sum=0;
loop:
    if(d>=1)
    {
      sum=sum+d;
      d=d-1;
      goto loop;
    }
    printf("%d",sum);
}
