//
// Created by jrste on 16/08/2022.
//

#ifndef CPP_JOURNEY_SOM_H
#define CPP_JOURNEY_SOM_H


class som {
public:
    som(int xDim, int yDim, const int inputVector[5]);
    [[nodiscard]] int getXDim() const;
    [[nodiscard]] int getYDim() const;
    [[nodiscard]] int getInputVector() const;

    [[maybe_unused]] [[nodiscard]] int setNPoints() const;
    [[maybe_unused]] void adjustGrid();
    [[maybe_unused]] void calculateNearest();
    [[maybe_unused]] void calculateDistance();
    [[maybe_unused]] void printGrid();
    [[maybe_unused]] static int generateWeights();
private:
    int xDim;
    int yDim;
    int inputVector[5];
};


#endif //CPP_JOURNEY_SOM_H
