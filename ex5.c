#include <stdio.h>
int main(){
    int a,b,c,d,sum;
    printf("Donner un nombre : \n");
    scanf("%d",&a);
    printf("Donner un nombre : \n");
    scanf("%d",&b);
    printf("Donner un nombre : \n");
    scanf("%d",&c);
    printf("Donner un nombre : \n");
    scanf("%d",&d);
    sum = a + b + c + d;
    printf("la somme est %d",sum);
    return 0;
}