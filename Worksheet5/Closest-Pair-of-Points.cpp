/*
Nama = Muhamad Ilham Habib
NPM = 140810180018
Kelas = B
Tanggal = 31-03-2020
desk = program mencari nilai titik terdekat
*/
#include <iostream>
#include <float.h>
#include <math.h>
using namespace std;

struct Point
{
    int x, y;
};

int testX(const void* a, const void* b)
{
    Point *p1 = (Point *)a, *p2 = (Point *)b;
    return (p1->x - p2->x);
}

int testY(const void* a, const void* b)
{
    Point *p1 = (Point *)a, *p2 = (Point *)b;
    return (p1->y - p2->y);
}

float distance(Point p1, Point p2)
{
    return sqrt(pow(p1.x-p2.x, 2) + pow(p1.y-p2.y, 2));
}

float bruteForce(Point P[], int n)
{
    float min = FLT_MAX;
    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j)
            if (distance(P[i], P[j]) < min)
                min = distance(P[i], P[j]);
    return min;
}

float min(float x, float y)
{
    if (x < y)
        return x;
    else
        return y;
}

float stripClosest(Point strip[], int size, float d)
{
    float min = d;
    for (int i = 0; i < size; ++i)
        for (int j = i+1; j < size && (strip[j].y - strip[i].y) < min; ++j)
            if (distance(strip[i], strip[j]) < min)
                min = distance(strip[i], strip[j]);
    return min;
}

float closestUtil(Point Px[], Point Py[], int n)
{
    if (n <= 3)
        return bruteForce(Px, n);

    int mid = n/2;
    Point mid_point = Px[mid];

    Point Pyl[mid+1];
    Point Pyr[n-mid-1];
    int li = 0, ri = 0;
    for (int i = 0; i < n; i++) {
        if (Py[i].x <= mid_point.x)
            Pyl[li++] = Py[i];
        else
            Pyr[ri++] = Py[i];
    }

    float dl = closestUtil(Px,Pyl, mid);
    float dr = closestUtil(Px+mid, Pyr, n-mid);
    float d = min(dl, dr);

    Point strip[n];
    int j = 0;
    for (int i = 0; i < n; i++)
        if (abs(Py[i].x-mid_point.x) < d)
            strip[j] = Py[i], j++;

    return min(d, stripClosest(strip, j, d));
}

float closest(Point P[], int n)
{
    Point Px[n];
    Point Py[n];
    for (int i = 0; i < n; i++) {
        Px[i] = P[i];
        Py[i] = P[i];
    }

    qsort(Px, n, sizeof(Point), testX);
    qsort(Py, n, sizeof(Point), testY);

    return closestUtil(Px, Py, n);
}

int main()
{
    Point P[] = {{12, 3}, {45, 60}, {90, 120}, {23, 12}, {39, 33}, {15, 18}};
    int n = sizeof(P)/sizeof(P[0]);
    cout<< "Jarak terkecilnya adalah "<<closest(P, n);
    cout<<endl;
    return 0;
}
