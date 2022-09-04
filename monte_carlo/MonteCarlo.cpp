//
// Created by jrste on 02/09/2022.
//

#include "MonteCarlo.h"
#include <iostream>
#include <random>

MonteCarlo::MonteCarlo(float _x, float _y) {
    float x = _x;
    float y = _y;
}

[[maybe_unused]] int MonteCarlo::piSimulation(float x, float y) {
    x = (float) rand() / RAND_MAX;
    y = (float) rand() / RAND_MAX;
    if (x * x + y * y <= 1) {
        return 1;
    } else {
        return 0;
    }
}

[[maybe_unused]] int MonteCarlo::coinSimulation(int state){
    std::default_random_engine generator;
    std::discrete_distribution<int> distribution {1, 2};
    int randomState;
    randomState = distribution(generator);
    if (randomState == state){
        return 1;
    }
    else {
        return 0;
    }
}
