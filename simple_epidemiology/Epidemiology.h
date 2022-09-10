//
// Created by jrste on 09/09/2022.
//

#ifndef CPP_JOURNEY_EPIDEMIOLOGY_H
#define CPP_JOURNEY_EPIDEMIOLOGY_H


class Epidemiology {
public:
    Epidemiology(int _x, int _y);
    int setNumPersons(int x, int y);
    int * buildGrid(int x, int y);

private:
    int dimensionX;
    int dimensionY;

};


#endif //CPP_JOURNEY_EPIDEMIOLOGY_H
