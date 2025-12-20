#include <stdio.h>
int main() {
    int a,b;
    printf("enter number:");
    scanf("%d",&a);
    b=(a/100)+((a/10)%10)+(a%10);
    b=(b-1)%9+1;
    printf("result=%d",b);
}
