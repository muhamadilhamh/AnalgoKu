/*
Nama = Muhamad Ilham Habib
NPM = 140810180018
Kelas = B
Tanggal 24 maret 2020
desk = program algoritma selectionSort
*/

#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, i_min, temp;

    for (i=0;i<n-1;i++) {
        i_min = i;
        for (j=i+1;j<n;j++) {
            if (arr[j] < arr[i_min]) i_min = j;
        }
        temp = arr[i];
        arr[i] = arr[i_min];
        arr[i_min] = temp;
    }
}

int main()
{
    int arr[] = { 1, 0, 17, 99, 66, 69 };
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Sebelum sorting: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    selectionSort(arr,n);

    cout<<"\nSesudah sorting: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
