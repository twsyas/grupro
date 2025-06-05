#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>
#include <iterator>
using namespace std;
struct tipo1{
    int dia;
    int mes;
    int ano;
};

bool ordem(tipo1 i, tipo1 j){
        return(i.ano<j.ano);
        return(i.mes<j.mes);
        return(i.dia<j.dia);
    } 

int main(){
    vector<tipo1> lista;
    tipo1 aux;
    int i,j = 0;
    while (cin >> aux.dia >> aux.mes >> aux.ano){
        lista.push_back(aux);

    }
    stable_sort(lista.begin(), lista.end(),ordem);

    for (i = 0; i < lista.size(); i++)
    {
    cout<<lista[i].dia<<" "<<lista[i].mes<<" "<<lista[i].ano<<endl;
    }
}