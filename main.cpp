#include <iostream>
#include <string>
#include <utility>
#include "cow/cow.h"
#include "monte_carlo/MonteCarlo.h"

int main() {
    MonteCarlo mc(0, 0);

    int nRuns = 100;
    int count = 0;
    float prob = .0;
    int state = 2;

    for(int i = 0; i < nRuns; i++) {
        count  += MonteCarlo::coinSimulation(state);
    }
    std::cout << count << std::endl;

    return 0;
}
