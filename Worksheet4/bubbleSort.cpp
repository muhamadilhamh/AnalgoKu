/*
Nama = Muhamad Ilham Habib
NPM = 140810180018
Kelas = B
Tanggal 24 maret 2020
desk = program algoritma bubbleSort
*/

#include <iostream>

using namespace std;
void bubbleSort(int arr[], int n)
{
    int temp;
    if (n == 1)
        return;

    for (int i=0; i<n-1; i++) {
        if (arr[i] > arr[i+1]) {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    bubbleSort(arr,n-1);
}

int main()
{
    int arr[] = { 1, 0, 17, 99, 66, 69 };
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Sebelum sorting: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    bubbleSort(arr,n);

    cout<<"\nSetelah sorting ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
