#include <stdio.h>
int main(){
    int a,s;
    printf("Donner un nombre : \n");
    scanf("%d",&a);
    s = a;
    printf("Donner un nombre : \n");
    scanf("%d",&a);
    s+=a;
    printf("Donner un nombre : \n");
    scanf("%d",&a);
    s+=a;
    printf("Donner un nombre : \n");
    scanf("%d",&a);
    s+=a;
    printf("la somme est %d",s);
    return 0;
}