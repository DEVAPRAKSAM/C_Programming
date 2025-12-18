#include <stdio.h>
int main() {
    int a,b;
    printf("enter number:");
    scanf("%d",&a);
    b=(a/100)*100+(a%10)*10+((a/10)%10);
    printf("result=%d",b);
}
