//
// Created by jrste on 02/09/2022.
//

#ifndef CPP_JOURNEY_MONTECARLO_H
#define CPP_JOURNEY_MONTECARLO_H


class MonteCarlo {
public:
    MonteCarlo(float _x, float _y);

    [[maybe_unused]] int piSimulation(float x, float y);
    [[maybe_unused]] int coinSimulation(int state);
};


#endif //CPP_JOURNEY_MONTECARLO_H
