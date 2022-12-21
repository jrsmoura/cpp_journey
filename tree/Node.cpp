//
// Created by jrste on 19/09/2022.
//

#include "Node.h"

Node::Node(int val){
    // val é a chave ou o valor que deve ser adicionado
    // à parte data
    data = val;

    // filhos Left e Right para o nó será inicializado como null
    left = NULL;
    right = NULL;
}