#include <stdio.h>
int main() {
    int a,b;
    printf("enter number:");
    scanf("%d",&a);
    b=a-(((a%10)%2)*((a/100)%2)*5);
    printf("result=%d",b);
}
