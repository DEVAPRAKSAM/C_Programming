#include <stdio.h>
int main() {
    int a,b;
    printf("enter number:");
    scanf("%d",&a);
    b=(a/100==a%100);
    printf("result=%d",b);
}
