#include <cmath>
#include <iostream>
#include "Random64.h"
using namespace std;
const int tam = 300;
int numeros [tam];

void llenar(int *arr, Crandom &rand64 )
    {
        int num;
        for (int ii = 0; ii < tam; ii++)
            {
                
                arr[ii] = int(rand64.r() * 900);
            }
    }

void print(int *arr)
    {

        for (int ii = 0; ii < tam; ii++)
            {
                
                if(ii%30==0)
                    {cout<<"\n";}
                cout<<arr[ii]<< " ";
            }
        cout<<"\n";
    }
void print_min(int *arr)
    {
        int min=901;
        for (int ii = 0; ii < tam; ii++)
            {
                if(min>arr[ii])
                    {min=arr[ii];}
            }
            cout << "El minimo es: " << min << "\n";
    }

void print_900(int *arr)
    {

        for (int ii = 0; ii < tam; ii++)
            {
                if(arr[ii]>800)
                    {
                        cout <<"," << arr[ii] << " es mayor que 800\n";
                        break;
                    }
                cout<<arr[ii]<<" ";
                if(ii%10==0)
                    {cout<<"\n";}
            }

    }

int main(void)
    {
        Crandom ran64(8);
        llenar(numeros, ran64);
        print(numeros);
        print_min(numeros);
        print_900(numeros);
    }