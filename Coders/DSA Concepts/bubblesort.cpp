// To sort an array using Bubble sort

#include <bits/stdc++.h>
using namespace std;

// Bubble sort algorithm
void bubblesort(int arr[], int n)
{
for (int i = 0; i < n - 1; i++)

// Last i elements are already in place
for (int j = 0; j < n - i - 1; j++)
if (arr[j] > arr[j + 1])
swap(arr[j], arr[j + 1]);
}

// Function to print an array
void printarray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";
cout << endl;
}

// Driver code
int main()
{
    int n;
    cin >> n;
    // Taking an array as input to Sort
int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
bubblesort(arr, n);
cout << "Sorted array: \n";
printarray(arr, n);
return 0;
}
