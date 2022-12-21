````c++

#include "cow/cow.h"
#include "linked_list/linkedLists.h"
#include "tree/Node.h"

int main() {
    Node* root = new Node(1);
    /*
     *                 1 <- root
     *               /    \
     *              2      3
     *            /   \   /  \
     *          4      5 6     7
     *        /   \   .... NULL ....
     *      NULL  NULL
     */

    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);
````

````c++
            char chute;
            cout << "Entre com uma letra" << endl;
            cin >> chute;
            bool condicao = letra_existe(chute);
            if (condicao) {
                cout << "a palavra secreta contem: " << chute << endl;
            }
            else {
                cout << "_ ";
            }
````