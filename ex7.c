#include <stdio.h>

int main(){
  int x,y,quo,res;
  float qra;
  printf("Entrez X : ");
  scanf("%d",&x);
  printf("Entrez Y : ");
  scanf("%d",&y);
  quo = x / y;
  res = x % y;
  qra = (float) x / y;
  printf("Quotient = %d\n",quo);
  printf("Reste = %d\n",res);
  printf("Quotient rationnel = %.1f",qra); 
    return 0;
}