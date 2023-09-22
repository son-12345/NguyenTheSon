#include<stdio.h>
int main(){
int a, b, pheptinh; 
printf("Enter number 1:"); 
scanf("%d", &a);
 
printf("Enter number 2:"); 
scanf("%d", &b); 

printf("Nhap phep tinh "); 
scanf("%d", &pheptinh); 

switch(pheptinh) {    
  case 1:      
    printf("Tong 2 so la %d", a+b);      
    break;    
  case 2:       
    printf("Hieu 2 so la %d", a-b);      
    break;    
   case 3:      
    printf("Tich 2 so la %d", a*b);      
    break;    
   case 4:      
    printf("Thuong 2 so la %f", (float)a/b);      
    break;    
   default:      
    printf("Nhap sai phep tinh"); 
}
}
