#include <stdio.h>
#include <string.h>
int main(){
    char M1[20],M2[20],M3[20],M4[20];
    printf("Entrez 4 mots : ");
    scanf("%s %s %s %s",&M1,&M2,&M3,&M4);
    strcat(M1," ");
    strcat(M1,M2);
    strcat(M1," ");
    strcat(M1,M3);
    strcat(M1," ");
    strcat(M1,M4);
    printf("%s\n",M1);
    strcat(M4," ");
    strcat(M4,M3);
    strcat(M4," ");
    strcat(M4,M2);
    strcat(M4," ");
    strcat(M4,M1);
    printf("%s",M4);
    return 0;
}