#include <iostream>
using namespace std;

template <typename T>
class Pila {
private:
    ListaPuntatori<T> lista; 

public:
  
    Pila() = default;


    void push(T elem) {
        lista.inslista(elem, 1); 
    }

  
    T pop() {
        if (isEmpty()) {
            cout<<"Errore: la pila è vuota.";
        }
        T topElem = lista.leggilista(1); 
        lista.canclista(1);             
        return topElem;
    }

   
    T top() const {
        if (isEmpty()) {
           cout<<"Errore: la pila è vuota.";
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

