//
// Created by jrste on 16/08/2022.
//

#include "som.h"
#include "som.h"

som::som(int xDimI, int yDimI, const int inputVectorI[5]) {
    xDim = xDimI;
    yDim = yDimI;
    inputVector[5] = inputVectorI[5];
}

[[nodiscard]] int som::getXDim() const {
    return xDim;
}
int som::getYDim() const {
    return yDim;
}
int som::getInputVector() const {
    return inputVector[5];
}
// The number of points on the grid is xDim * yDim
[[maybe_unused]] int som::setNPoints() const {
    return getYDim() * getXDim();
}



[[maybe_unused]] void som::adjustGrid() {}
[[maybe_unused]] void som::calculateNearest() {}

// Implement Euclidean distance.
void som::calculateDistance() {}

// Print a grid scratch on screen.
void som::printGrid() {}

// Random generate a weight to each connection on the grid
[[maybe_unused]] int som::generateWeights() {
    return 0;
}

