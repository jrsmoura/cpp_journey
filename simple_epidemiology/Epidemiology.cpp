//
// Created by jrste on 09/09/2022.
//
#include <random>
#include "Epidemiology.h"

int Epidemiology::setNumPersons(int x, int y) {
    return x * y;
}

int* Epidemiology::buildGrid(int x, int y) {
    int grid[x][y];
    float randomTest;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            randomTest = (float) rand() / RAND_MAX;
            if(randomTest < 0.3) {
                grid[i][j] = 0;
            }
            else {
                grid[i][j] = 1;
            }
        }
    }

    return 0;
}

Epidemiology::Epidemiology(int _x, int _y) {
    int x = _x;
    int y = _y;
}
