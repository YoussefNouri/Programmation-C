#include <stdio.h>

int main(){
    double pbrut,pnet;
    int tva;
    printf("Entrez le prix brut : ");
    scanf("%lf",&pbrut);
    printf("Entrez le taux de TVA : ");
    scanf("%d",&tva);
    pnet = (pbrut * 100/tva) / 2;
    printf("le print net est : %.1lf",pnet);
    return 0;
}