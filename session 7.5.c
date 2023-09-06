#include<stdio.h>
void main(){
	char c;
	printf("please enter the character:");
	scanf("%c",&c);
	if (c>='A'&&c<='Z')
	printf("Lowercase character =%c",c+'a'-'A');
	else
	printf("Character Entered is =%c",c);
}
