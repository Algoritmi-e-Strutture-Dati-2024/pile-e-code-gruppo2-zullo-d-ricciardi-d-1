#include <iostream>
#include "ListaPuntatori.cpp"
using namespace std;

template <typename T>
class Coda {
private:
    ListaPuntatori<T> lista; 

public:
    
    Coda() = default;

   
    void enqueue(T elem) {
        lista.inslista(elem, lista.lunghezza() + 1); 
    }

    T dequeue() {
        if (isEmpty()) {
            cout<<"Errore: la coda è vuota.";
        }
        T frontElem = lista.leggilista(1); 
        lista.canclista(1);             
        return frontElem;
    }

    
    T front() const {
        if (isEmpty()) {
            cout<<"Errore: la coda è vuota.";
        }
        return lista.leggilista(1); 
    }

   
    bool isEmpty() const {
        return lista.listavuota();
    }
  
    int size() const {
        return lista.lunghezza(); 
    }
};
    
    int size() const {
        return lista.lunghezza(); 
    }
};
