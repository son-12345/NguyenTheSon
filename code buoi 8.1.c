#include<stdio.h>
int main(){
	float r,c,s;
	printf("ban kinh cua hinh tron la r=");
	scanf("%f",&r);
	c=6.28*r;
	s=3.14*r*r;
	printf("\n");
	printf("ket qua tinh chu vi va dien tich hinh tron:\n");
	printf("ban kinh hinh tron: r=%8.1f met \n",r);
	printf("chu vi hinh tron: c=%8.2f met \n",c);
	printf("dien tich hinh tron s=%8.2f met vuong \n",s);
	return 1;
	printf("data type\t | size of byte\n");
	printf("int \t | %d byte \n", sizeof(int));
	printf("int \t | %d byte \n", sizeof(int));
	printf("unsigned int \t | %d byte \n", sizeof(unsigned int));
	printf("short int \t | %d byte \n", sizeof(short int));
	printf("long int \t | %d byte \n", sizeof(long int));
	printf("double \t | %d byte \n", sizeof(double));
}
