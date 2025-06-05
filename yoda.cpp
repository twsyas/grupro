#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>
using namespace std;

struct padawan{
    string nome;
    int num;
    int num1;
};

bool ordem(padawan f, padawan g){
    return(f.nome<g.nome);
}

int main(){

   vector<padawan>padawans;
   padawan aux;
   string S;
   int i, N, j =0;
   cin >> N;
   for(i=0; i<N; i++){
    cin>> aux.nome>>aux.num >> aux.num1;
    aux.num1 = abs(aux.num1-aux.num);
    padawans.push_back(aux);

   }
   stable_sort(padawans.begin(), padawans.end(), ordem);
   for(j=0; j<N; j++){
    cout << padawans[j].nome << " " << padawans[j].num1 << endl;

   }
    
}