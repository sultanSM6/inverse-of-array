#include <stdio.h>
int main(){
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int i;
	// print this array normally
	printf("The Array itself\n\n");
	for (i=0; i<10; i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n\n");
	// print inverse of this Array 
		printf("Inverse of the Array\n\n");

	for (i=9; i>=0; i--)
	{
		printf("%d  ",arr[i]);
	}
}
