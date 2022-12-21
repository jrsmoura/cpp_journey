//
// Created by jrste on 19/12/2022.
//
#include <iostream>
#include <string>
#include <map>
#include "jogo_da_forca.h"
using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";
map<char, bool> chutou;

namespace Forca {
    bool letra_existe(char chute) {

        for(char letra: PALAVRA_SECRETA) {
            if (chute == letra) {
                return true;
            }
        }
        return false;
    }

    [[noreturn]] int jogo_da_forca::runGame() {
        bool nao_acertou =  true;
        bool  nao_enforcou =  true;

        while(nao_acertou && nao_enforcou) {
            for(char letra: PALAVRA_SECRETA) {
                if(chutou[letra]){
                    cout << letra << " ";
                }
                else {
                    cout << "_ ";
                }
            }
            cout << endl;
        }
    }
} // Forca