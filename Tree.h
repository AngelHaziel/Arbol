#include <iostream>
#pragma once

class tree{
public:
    Node *arbol = null;

Node *insertarNode(Node *&arbol,int dato){
    Node *NewRoot = crearNodo(dato);
    arbol = NewRoot;
}
Node *insertarNodeL(Node *&arbol, int dato){
    if(arbol != null){
        insertarNode(arbol->L,dato);
    }
}
Node *insertarNodeLR(Node *&arbol, int dato){
    if(arbol != null){
        insertarNode(arbol->R,dato);
    }
}
};