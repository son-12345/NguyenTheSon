#include <stdio.h>
int main() 
{
 int arr[5];
 int i, max, min, sum, avg;
 for (i = 0; i < 5; i++)
 {
    printf("\n Enter a num %d:" , i + 1);
    scanf("%d", &arr[i]);
 }
 max = arr[0];
 for(i = 1; i < 5; i++)
 {
 if(arr[i] > max)
 max = arr[i];
 }
 printf("\n Enter the biggest num: %d", max);
 min = arr[0];
 for(i = 1; i < 5; i++)
 {
     if(arr[i] < min)
     min = arr[i];
 }
 printf("\n Enter the smallest num: %d", min);
 for(i = 0, sum = 0; i < 5; i++)
     sum += arr[i];
     printf("\n Tong: %d", sum);
for(i = 0, avg = 0; i < 5; i++)
    avg = arr[i] + avg;
    printf("\n Trung bình: %d", avg/i);
printf("\nIN theo thu tu nguoc lai:");
for(i = 4; i >= 0; i--)
    printf("\n%d",arr[i]);
}


