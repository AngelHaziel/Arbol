#pragma once

class Node:public Tree{
public:
int date;
Node *R;
Node *L;
Node *crearNodo(int dato){
    Node *root_principal = new Node();
    root_principal->dato=dato;
    root_principal->L=null;
    root_principal->R=null;

    return root_princial;
} 
};