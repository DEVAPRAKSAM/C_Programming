#include<stdio.h>
int main(){   
    int d=11;
loop:
    if(d<=20)
    {
        printf("%d\n",d);
        d=d+2;
        goto loop;
    }
}
