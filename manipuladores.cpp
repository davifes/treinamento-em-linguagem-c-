//com tamanho de campo
//usa manioulador setw e setfill
#include<iostream>
#include<iomanip>//para o uso de manipuladores
using namespace std;

int main(){
    int lapis = 45, borrachas = 2345, canetas = 420, cadernos = 8, fitas = 13050;
    cout << setfill ('.');//manipulador
    cout << '\n' << "lapis     " << setw(12) << lapis;
    cout << '\n' << "borrachas " << setw(12) << borrachas;
    cout << '\n' << "canetas   " << setw(12) << canetas;
    cout << '\n' << "cadernos  " << setw(12) << cadernos;
    cout << '\n' << "fitas     " << setw(12) << fitas << endl;

    system("pause");
    return 0;
}