#include <iostream>
#include "listaligada.h"
using namespace std;


//--- No modificar el main ya que es necesario para
//------ la prueba de GitHub Classroom
//--- Puede comentarse para hacer sus
//------- propias pruebas
int main() {
    ListaLigada<int> lista;

    lista.push_front(10); // insertar al inicio (frente)
    lista.push_front(0);  // insertar al inicio (frente)
    lista.push_front(4);  // insertar al inicio (frente)

    lista.push_back(7); // insertar al final (cola)
    lista.push_back(8); // insertar al final (cola)

    cout << lista.size() << endl; // imprime la cantidad de nodos (elementos)
    
    lista.pop_back();  // elimina el ultimo (cola)
    
    cout << lista.size() << endl;  // imprime la cantidad de nodos (elementos)
    lista.print();                 // recorre la lista e imprime cada nodo (elemento)

    lista.~ListaLigada();          // se eliminan todos los nodos
    cout << lista.size() << endl;  // imprime la cantidad de nodos (elementos)

    return 0;
}