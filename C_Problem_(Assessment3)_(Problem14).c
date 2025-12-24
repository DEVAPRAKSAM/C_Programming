#include<stdio.h>
int main(){
    int a,ones,tens;
    printf("Enter an number:");
    scanf("%d",&a);
    ones=a%100;
    tens=a/100;
    if(ones==tens){
        printf("Success");
    }
    else{
        printf("Failure");
    }
    return 0;
}
