#include <iostream>
#include <string>
#include <utility>
#include "cow/cow.h"

enum cow_purpose  {dairy, meat, hide, pet};
using namespace std;


int main() {
    cow my_cow("Hilde", 7, pet);

    cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;

    return 0;
}
