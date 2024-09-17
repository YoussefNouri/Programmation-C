#include <stdio.h>
int main(){
    int a,b,c,var;
    printf("Entrez un nombre A: ");
    scanf("%d",&a);
    printf("Entrez un nombre B: ");
    scanf("%d",&b);
    printf("Entrez un nombre C: ");
    scanf("%d",&c);
    var = a;
    a = b;
    b = c;
    c = var;
    printf("A = %d\n",a);
    printf("B = %d\n",b);
    printf("C = %d",c);

    return 0;
}