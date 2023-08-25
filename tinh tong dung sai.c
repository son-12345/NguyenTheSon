#include<stdio.h>
int main(){
	float t,v,a,sum;
	printf("\nnhap 3 so");
	scanf("%f %f %f",&t,&v,&a);
	sum=t*2+v*2+a;
	if(sum<40){printf("fail");}
	else{printf("pass");}
	return 0;
}







