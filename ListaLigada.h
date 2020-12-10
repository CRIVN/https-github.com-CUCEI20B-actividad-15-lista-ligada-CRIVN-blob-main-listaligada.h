#ifndef LISTALIGADA_H
#define LISTALIGADA_H
#include<iostream>
using namespace std;


template<class T>
class ListaLigada
{
private:
    struct Nodo{
        T dat;
        Nodo *siguiente;

        Nodo(const T& dat, Nodo *siguiente = nullptr):dat(dat), siguiente(siguiente) {}
    };

    Nodo *Head;
    size_t contador;
public:
    ListaLigada();
    ~ListaLigada();
    void push_front(const T &dat);
    void pop_front();
    size_t size();

    void print();
    void push_back(const T &dat);
    void pop_back();
};


template<class T>
ListaLigada<T>::ListaLigada()
{
    Head = nullptr;
    contador = 0;
}


template <class T>
ListaLigada<T>::~ListaLigada()
{
    while (contador > 0)
    {
        pop_front();
    }
}


template<class T>
void ListaLigada<T>::push_front(const T &dat)
{
    Nodo *nodo = new Nodo(dat, Head);
    Head = nodo;
    ++contador;
}


template<class T>
void ListaLigada<T>::pop_front()
{
    if (contador == 0){
        cout <<"Lista Ligada vacia" <<endl;
    }
    else{
        Nodo *temp = Head;
        Head = Head->siguiente;
        delete temp;
        --contador;
    }
}


template<class T>
size_t ListaLigada<T>::size()
{
    return contador;
}


template<class T>
void ListaLigada<T>::print()
{
    Nodo *temp = Head;
    while (temp != nullptr){
        cout << temp->dat << endl;
        temp = temp->siguiente;
    }
}


template <class T>
void ListaLigada<T>::push_back(const T &dat)
{
    if (contador == 0){
        push_front(dat);
    }
    else{
        Nodo *nodo = new Nodo(dat);
        Nodo *temp = Head;

        while (temp->siguiente != nullptr)
        {
            temp = temp->siguiente;
        }
        temp->siguiente = nodo;
        contador++;

    }
}


template <class T>
void ListaLigada<T>::pop_back()
{
    if (contador == 0){
        cout << "Esta lista ligada esta vacia" << endl;
    }
    else if (contador == 1){
        pop_front();
    }
    else {
        Nodo *temp = Head;

        while (temp->siguiente->siguiente != nullptr)
        {
            temp = temp->siguiente;
        }
        delete temp->siguiente;
        temp->siguiente = nullptr;
        --contador;
    }
}

#endif
