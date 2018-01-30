#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
using namespace std;
void zamien ( int &a, int &b )
{
int temp = a;
a = b;
b = temp;
}
void sortowanie_przez_wybor (int tab[], int n)
{

int i, j, k, temp;
for (i=0; i<n; i++)
{
k= i;
for ( j=i+1; j<n; j++)
if (tab[j]<tab[k])
k = j;
zamien (tab[k],tab[i]);
}
}
void wypisz(int tab[], int n)
{
for (int i=0; i<n; i++)
cout << setw (3) << tab[i];
cout << endl;
}
int main ()
{
int tablica [20];
int i;
srand (time(NULL));
for ( i=0; i<20; i++)
tablica [i] = rand () %100;
cout << "Tablica wypelniona losowo liczbami z przedzialu <0,99>:" << endl;
wypisz (tablica, 20);
cout << "posortowana tablica:" << endl;
sortowanie_przez_wybor (tablica,20);
wypisz(tablica, 20);

getchar ();
getchar ();
return 0;
}
