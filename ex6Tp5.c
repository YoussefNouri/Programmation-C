#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Donner la taille du texte : ");
    scanf("%d", &n);
    
    char mot1[100], mot2[100];
    printf("Donner le mot a remplacer : ");
    scanf("%s", mot1); 
    printf("Donner le mot en echange : ");
    scanf("%s", mot2);
    
    char texte[n][100];
    for (int i = 0; i < n; i++) {
        printf("t[%d] = ", i);
        scanf("%s", texte[i]); 
    }
    for (int i = 0; i < n; i++) {
        int res = strcmp(texte[i], mot1);
        if (res == 0) { 
            strcpy(texte[i], mot2); 
        }
    }
    
    printf("\n");
    printf("Ce texte devient : \n");
    for (int i = 0; i < n; i++) {
        printf("%s\t", texte[i]);
    }
    
    return 0;
}