//
// Created by jrste on 05/09/2022.
//
#include <iostream>

#include "tree.h"
/*
 * Uma árvore binária é formada por um nó com dados,
 * um ponteiro para a direita e um ponteiro para
 * a esquerda
 */
struct Node{
    int data;
    struct Node * left, *right;
};

/*
 * Função para criação de um novo nó da árvore
 */
Node* newNode(int data) {
    Node* temp = new Node;
    temp -> data = data;
    temp -> left = temp -> right = NULL;
    return temp;
}

void printPostorder(struct Node* node) {
    if (node == NULL)
        return;
    printPostorder(node -> left);
    printPostorder(node -> right);
    std::cout << node -> data << " ";
}

