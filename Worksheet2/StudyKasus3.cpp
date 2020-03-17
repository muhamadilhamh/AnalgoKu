/*
Nama = Muhamad Ilham Habib
NPM = 140810180018
Kelas = B
Tanggal = 10-03-2020
Des = Binary Search
*/

#include <iostream>

using namespace std;

int BinarySearch(int x[], int y, int size) {
    int i = 0, j = size, mid;
    bool found = false;

    while (!found && i < j) {
        mid = (i + j + 1)/2;
        if (x[mid] == y)
            found = true;
        else if (x[mid] < y)
            i = mid + 1;
        else
            j = mid - 1;
    }

    if (found)
        return mid;
    else
        return 0;
}

int main()
{
    int x[10] = {1,2,3,4,5,6,7,8,9,10};

    cout << "Index dari 5 = " << BinarySearch(x, 5, 10) << endl;
}
