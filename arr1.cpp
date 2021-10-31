#include <iostream>

void swap(int *p,int *q);
int main()
{
	int x= 10;
	int y = 20;
	printf("\n before swapping");
	printf("\n x = %d  ",x);
	printf("\n y = %d  ",y);
	
	swap(&x, &y);
	
	printf("\n After swapping");
	printf("\n x = %d  ",x);
	printf("\n y = %d  ",y);
	
	
	return 0;
}

void swap(int *p,int *q)
{
	int temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}


/*
 before swapping
 x = 10
 y = 20
 After swapping
 x = 20
 y = 10
-------------------
*/
