
#include <iostream>
using namespace std;

#define ARRAY_SIZE 5

void PrintArray(int* array, int n);
void QuickSort(int* array, int startIndex, int endIndex);
int SplitArray(int* array, int pivotValue, int startIndex, int endIndex);
void swap(int &a, int &b);

int main(void)
{
	int array[ARRAY_SIZE];
	int i;

	for( i = 0; i < ARRAY_SIZE; i++)
	{
		 cout<<"Insira um numero inteiro : ";
		 cin>>array[i];
	}

	cout<<endl<<"Sua lista de entrada é : "<<endl;
	PrintArray(array, ARRAY_SIZE);
	QuickSort(array,0,ARRAY_SIZE - 1);
	cout<<endl<<"Sua lista ordenada: : "<<endl;
	PrintArray(array, ARRAY_SIZE);

	cin.get();
	cin.get();
	return 0;
}


void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void PrintArray(int* array, int n)
{
	int i;

	for( i = 0; i < n; i++) cout<<array[i]<<'\t';
}

void QuickSort(int* array, int startIndex, int endIndex)
{
	int pivot = array[startIndex];
	int splitPoint;

	if(endIndex > startIndex)


	{
		splitPoint = SplitArray(array, pivot, startIndex, endIndex);


		array[splitPoint] = pivot;
		QuickSort(array, startIndex, splitPoint-1);
		QuickSort(array, splitPoint+1, endIndex);
	}
}

int SplitArray(int* array, int pivot, int startIndex, int endIndex)
{
	int leftBoundary = startIndex;
	int rightBoundary = endIndex;

	while(leftBoundary < rightBoundary)
	{
		 while( pivot < array[rightBoundary]
				&& rightBoundary > leftBoundary)
		 {
			  rightBoundary--;
			  		 }
		 swap(array[leftBoundary], array[rightBoundary]);


		 while( pivot >= array[leftBoundary]
				&& leftBoundary < rightBoundary)
		 {
			  leftBoundary++;
		 }
		 swap(array[rightBoundary], array[leftBoundary]);

	}
	return leftBoundary;


}
