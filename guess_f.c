#include <stdio.h>
void guess(){
    int guess, num=10;
    while(1){
    printf("Enter a number: ");
    scanf("%d",&guess);
    if(num==guess)
    {
        printf("correct\n");

    }
    else
    {
        printf("incorrect\n");
    }
}
}
void main(){
    guess();
}
