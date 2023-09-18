#include<stdio.h>
int add(int a, int b);
int main(){
	int result=add(5, 3);
	printf("tong la:%d\n",result);
	int result2=add(4, 3);
	printf("tong la:%d\n",result2);
	int num1, num2;
	printf("nhap so hang thu nhat:");
	scanf("%d",&num1);
	printf("nhap so hang thu hai:");
	scanf("%d",&num2);
	int result3=add(num1, num2);
	printf("tong la:%d\n",result3);
}
int add(int a, int b){
	printf("\n\n Thuc hien tinh tong:\n");
	printf("so hang a=%d\n",a);
	printf("so hang b=%d\n",b);
}
