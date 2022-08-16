//
// Created by jrste on 16/08/2022.
//
#include <string>
#include "cow.h"


cow::cow(std::string name_i, int age_i, unsigned char purpose_i) {
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}
[[nodiscard]] std::string cow::get_name(){
    return  name;
}
[[nodiscard]] int cow::get_age() const{
    return age;
}
[[nodiscard]] unsigned char cow::get_purpose() const {
    return purpose;
}
void cow::set_age(int new_age) {
    age = new_age;
}
