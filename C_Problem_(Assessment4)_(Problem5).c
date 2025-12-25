#include<stdio.h>
int main(){   
    int d=1;
loop:
    if(d<=9)
    {
        printf("%d\n",d);
        d=d+2;
        goto loop;
    }
}
