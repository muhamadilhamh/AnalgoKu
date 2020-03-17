/*
Nama = Muhamad Ilham Habib
NPM = 140810180018
Kelas = B
Tanggal = 10-03-2020
Des = Pencarian nilai max
*/
#include <iostream>

using namespace std;

int main()
{
   int i, n, maks;
    float arr[255];

    cout << "Max array : ";
    cin >> n;
    cout << "masukan data: \n";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    i = 2;
    maks = arr[0];
    while (i <= n)
    {
        if (arr[i] > maks)
        {
            maks = arr[i];
        }
        i = i + 1;
    }
    cout << maks;
}
