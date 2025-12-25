#include<stdio.h>
int main(){
    int d=5;
loop:
    if(d>=1)
    {
     printf("%d\n",d);
     d=d-1;
     goto loop;
    }
}
