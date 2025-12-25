#include<stdio.h>
int main(){
    int d=1;
loop:
    if(d<=5)
    {
     printf("%d\n",d);
     d=d+1;
     goto loop;
    }
}
