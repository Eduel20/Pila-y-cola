#ifndef COLA_H
#define COLA_H
#include "listadoble.h"

template <class T>
class Cola{
	listadoble <T> lista;
	
public:
	
	Cola();
	void push(const T &d);
	void pop();
	T* front();
	T* back();
	size_t size();
	bool empty();
		
};



template <class T>
Cola<T>::Cola(){
	
}



template <class T>
void Cola<T>::push(const T &d){
	lista.pushback(d);
}



template <class T>
void Cola<T>::pop(){
	lista.popfront();
}


template <class T>
T* Cola<T>::front(){
	return lista.front();
}


template <class T>
T* Cola<T>::back(){
	return lista.back();
}



template <class T>
size_t Cola<T>::size(){
	return lista.size();
}


template <class T>
bool Cola<T>::empty(){
	return lista.empty();
}




















#endif
