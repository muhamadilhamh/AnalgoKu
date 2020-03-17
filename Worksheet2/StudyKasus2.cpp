/*
Nama = Muhamad Ilham Habib
NPM = 140810180018
Kelas = B
Tanggal = 10-03-2020
Des = Sequential Search
*/
#include <iostream>

using namespace std;
int main(){
int jumlah, search, A[100], index, jwb;
    bool found = false;
    cout << "SEQUENTIAL SEARCH";
    cout << "\nMasukan banyak data =  ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++)
    {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> A[i];
    }

    cout << "\nMasukan data yang dicari : ";
    cin >> search;

    for (int i = 0; i < jumlah; i++)
    {
        if (A[i] == search)
        {
            found = true;
            index = i;
            i = jumlah;
        }
    }
    if (found == true)
    {
        cout << "Data ditemukan pada data ke-" << index + 1;
    }
    else
    {
        cout << "Data tidak Ada!";
    }
    cout << "\n";
}
