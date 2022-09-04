#include <iostream>
#include <random>
#include "monte_carlo/MonteCarlo.h"

int main() {
    int n_runs = 100;
    int count = 0;
    float x = .0;
    float y = .0;
    MonteCarlo mc(x, y);

    for(int i = 0; i < n_runs; i++) {
        count += mc.coinSimulation(2);
        std::cout << (float) count << std::endl;
    }
    std::cout << (float) count / n_runs << std::endl;


    std::default_random_engine generator;
    std::discrete_distribution<int> distribution {1, 2};
    for(int i = 0 ; i < 10; i++) {
        int randomState;
        randomState = distribution(generator);
        std::cout << "Testing:  " << randomState << std::endl;
    }
    return 0;
}
