/*
Nama = Muhamad Ilham Habib
NPM = 140810180018
Kelas = B
Desk = Stable Marriage Problem
*/

#include <iostream>
#include <string.h>
#include <stdio.h>


using namespace std;
#define N 5

bool pilihlaki(int priorotas[2*N][N], int b, int j, int j1)
{
    for(int i = 0; i < N; i++)
    {
        if(priorotas[b][i]==j1)
            return true;

        if(priorotas[b][i]==j)
            return false;
    }
}

void coba(int prioritas[2 * N][N])
{
    int pasanganPerempuan[N];

    bool priaJomblo[N];

    memset(pasanganPerempuan, -1, sizeof(pasanganPerempuan));
    memset(priaJomblo,false, sizeof(priaJomblo));
    int jumlahJomlo = N;

    while(jumlahJomlo > 0)
    {
        int j;
        for(j = 0; j < N; j++)
            if(priaJomblo[j]==false)
                break;

        for(int i=0; i < N && priaJomblo[j]== false; i++)
        {
            int b = prioritas[j][i];

            if(pasanganPerempuan[b - N] == -1)
            {
                pasanganPerempuan[b - N] = j;
                priaJomblo[j] = true;
                jumlahJomlo--;
            }

            else
            {
                int j1 = pasanganPerempuan [b - N];

                if(pilihlaki(prioritas, b, j, j1)== false)
                {
                    pasanganPerempuan[b - N]= j;
                    priaJomblo[j] = true;
                    priaJomblo[j1] = false;
                }
            }
        }
    }
    cout << "=================" << endl;
    cout << "    Pasangan     " << endl;
    cout << "=================" << endl;
    string lakiLaki;
    string perempuan;
    for(int i = 0;i < N; i++)
    {
        if(i < N)
        {
            if(pasanganPerempuan[i]== 0)
                lakiLaki ="Victor";
            if(pasanganPerempuan[i]== 1)
                lakiLaki ="Wyatt";
            if(pasanganPerempuan[i]== 2)
                lakiLaki ="Xavier";
            if(pasanganPerempuan[i]== 3)
                lakiLaki ="Yancer";
            if(pasanganPerempuan[i]== 4)
                lakiLaki = "Zeus";

            if(i == 0)
                perempuan = "Amy";
            if(i == 1)
                perempuan = "Bertha";
            if(i == 2)
                perempuan = "Clare";
            if(i == 3)
                perempuan = "Diane";
            if(i == 4)
                perempuan = "Erika";
        }
    cout << " "<<lakiLaki<<"\t "<<perempuan<<endl;
    }
    cout << "================"<<endl;

}

int main()
{
    int prioritas[2 * N][N] = {{6, 5, 8, 9, 7},
                            {8, 6, 5, 7, 9},
                            {6, 9, 7, 8, 5},
                            {5, 8, 7, 6, 9},
                            {6, 8, 5, 9, 7},
                            {4, 0, 1, 3, 2},
                            {2, 1, 3, 0, 4},
                            {1, 2, 3, 4, 0},
                            {0, 4, 3, 2, 1},
                            {3, 1, 4, 2, 0}};
    coba(prioritas);

    return 0;
}
