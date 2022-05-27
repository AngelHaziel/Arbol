#include "Tree.h"
#include <iostream>
#include <stdlib.h>


int main(){
    int opc, dato;
    std::cout<<"-----Menu-----"<<std::endl;
    std::cout<<"1.- Ingresar nodo a la Izquierda"<<std::endl;
    std::cout<<"2.- Ingresar nodo a la Derecha"<<std::endl;
    std::cout<<":"<<std::endl;
    std::cin>>opc;

    switch (opc)
    {
    case 1:
         std::cout<<"Digite un dato: "<<std::endl;
         std::cin>>dato;
         insertarNodeL(arbol,dato);
        break;
    
    default:
        break;
    }
};