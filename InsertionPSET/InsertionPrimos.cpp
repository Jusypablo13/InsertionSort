#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void selectionSort(vector<int>& numeros){ 
    int n = numeros.size();
    for(int i = 1; i < n; i++){ //Recorrer el arreglo
        int key = numeros[i]; //Elemento a insertar
        int j = i - 1; //Indice del elemento anterior
        while (j >= 0 && numeros[j] > key) //Mientras el elemento anterior sea mayor que key
        {
            numeros[j+1] = numeros[j]; //Mover el elemento anterior una posición adelante
            j--; //Mover el índice una posición atrás
        }
        numeros[j+1] = key; //Insertar key en su lugar
    }
}

bool esPrimo(int n){
    if(n <= 1) return true; //Los números negativos, 0 y 1 no son primos
    if(n == 2) return true; //El 2 es primo
    if(n % 2 == 0) return false; //Los números pares no son primos
    for(int i = 3; i <= sqrt(n); i += 2){ //Recorrer los impares desde 3 hasta la raíz cuadrada de n
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    vector<int> numeros = {12, 5, 3, 7, 1, 11, 4, 8, 13, 25, 17, 19, 86};
    selectionSort(numeros);
    vector<int> primos;
    for(int num: numeros){
        if(esPrimo(num)){
            primos.push_back(num);
        }
    }
    for(int primo: primos){
        cout << primo << ",";
    }
    return 0;
}