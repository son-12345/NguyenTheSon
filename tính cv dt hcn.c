#include <stdio.h>
void ChuViHCN(int a, int b){
  int P;
  P = (a + b) * 2;
  printf("\n Perimeter of the rectangle: %d",P);
}
void DienTichHCN(int a, int b){
  int S;
  S = a * b; 
  printf("\n Area of the rectangle: %d",S);
}
 
int main(){
  int a, b;
  printf("enter length a: ");
  scanf("%d", &a);
  printf("enter length b: ");
  scanf("%d", &b);
  ChuViHCN(a, b);
  DienTichHCN(a, b);
  return 0;
}
