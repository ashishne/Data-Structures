#include <iostream>

void SelectionSort(int A[],int n);
void display(int A[],int n1);

int main() 
{
	int A[]= {1,9,5,4,2,3,6,8,12,7,22,55,25,13,26,45};
	
	int n = sizeof(A)/sizeof(int);
	printf("\n Size of Array %d",n);
	
	printf("\n UnSorted Array ==>  ");	
		display(A,n);
	
	SelectionSort(A,n);//calling the method 
	
	printf("\n\n Sorted Array ==>  ");
		display(A,n);

	return 0;
}

void display(int A[],int n1)
{
	for (int i = 0;i<n1;i++)
	{
		printf("%d ",A[i]);
	}
}



void SelectionSort(int A[],int n)
{
	printf("\n");
	for(int i = 0;i<n-1;i++)
	{
		printf("\n Iteration no : %d\n ",i);
		display(A,n);
		
		int imin = i; //ith posiution 
		
		
		for (int j = i+1;j<n;j++)
			{	
				if (A[j]<A[imin])
					imin = j;					
			}	
				printf("\n i = %d",i);
				printf("\n\t Smallest element : %d",A[imin]);		
				int temp = A[i];
				A[i]= A[imin];
				A[imin]=temp;			
		
	}
}
