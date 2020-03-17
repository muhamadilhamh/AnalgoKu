/*
Nama = Muhamad Ilham Habib
NPM = 140810180018
Kelas = B
Tanggal = 10-03-2020
Des = Program mengenai Insertion Sort
*/
#include <iostream>

using namespace std;

int x[50], y[50], n;

void InsertionSort(){
    int temp, i, j;
    for (i = 1; i <= n; i++){
        temp = x[i];
        j = i - 1;
        while (x[j] > temp && j >= 0){
            x[j + 1] = x[j];
            j--;
        }
        x[j + 1] = temp;
    }
}

int main(){
    cout << "Masukkan Banyak data : ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        cout << "Masukkan data ke-" << i << " : ";
        cin >> x[i];
        y[i] = x[i];
    }
    InsertionSort();
    cout << "\nHasil Output : ";

    for (int i = 1; i <= n; i++){
        cout << x[i] << " ";
    }
}
