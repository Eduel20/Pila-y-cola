#include <iostream>
#include "listadoble.h"
#include "pila.h"
#include "cola.h"

using namespace std;

int main( ) {
	Cola<int> cola;

    cola.push(-1);
    cola.push(0);
    cola.push(1);
    cola.push(2);
    cola.push(3);

    cout << "Cola front: " << *cola.front() << endl << endl;
    cout << "Cola back: "<< *cola.back() << endl << endl;

    cout << "Cola size: " << cola.size() << endl << endl;
	
	cola.pop();
	
    cout << "Cola size after pop: "<< cola.size() << endl << endl;

    Pila<int> pila;

    while (!cola.empty()){
        int *e = cola.front();
        if (e != nullptr) {
            pila.push(*e);
        }

        cola.pop();
    }
    
    pila.push(10);

    cout << "Pila size: "<< pila.size() << endl << endl << "Pila items: "<< endl;

    while (!pila.empty()){
        int *e = pila.top();
        if (e != nullptr) {
            cout << *e << endl;
        }

        pila.pop();
    }
    
    cout << "Pila size after several pops: "<< pila.size() << endl;
    
	return 0;
}
