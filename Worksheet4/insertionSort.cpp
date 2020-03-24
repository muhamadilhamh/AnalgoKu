/*
Nama = Muhamad Ilham Habib
NPM = 140810180018
Kelas = B
Tanggal 24 maret 2020
desk = program algoritma insertionSort
*/

#include <iostream>

using namespace std;


void insertionSort(int arr[], int n)
{
    int i, j, insertt;
    for (i=1;i<n;i++) {
        insertt = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > insertt) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = insertt;
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

    insertionSort(arr,n);

    cout<<"\nSetelah sorting: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
