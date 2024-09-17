#include <stdio.h>

int main(){
    double pbrut,pnet;
    int tva;
    printf("Entrez le prix net : ");
    scanf("%lf",&pnet);
    printf("Entrez le taux de TVA : ");
    scanf("%d",&tva);
    pbrut = (pnet + pnet)*tva/100;
    printf("le prix brut est : %.2lf",pbrut);
    return 0;
}