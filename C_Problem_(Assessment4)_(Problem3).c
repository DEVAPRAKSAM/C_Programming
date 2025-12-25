#include<stdio.h>
int main(){
    int d=1,sum=0;
loop:
    if(d<=5)
    {
      sum=sum+d;
      d=d+1;
      goto loop;
    }
    printf("%d",sum);
}
