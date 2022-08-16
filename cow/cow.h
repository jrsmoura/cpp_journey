//
// Created by jrste on 16/08/2022.
//

#ifndef CPP_JOURNEY_COW_H
#define CPP_JOURNEY_COW_H
#include <string>

class cow {
public:
    cow(std::string name_i, int age_i, unsigned char purpose_i);
    [[nodiscard]] std::string get_name();
    [[nodiscard]] int get_age() const;
    [[nodiscard]] unsigned char get_purpose() const;
    void set_age(int new_age);

private:
    std::string name;
    int age{};
    unsigned char purpose{};
};


#endif //CPP_JOURNEY_COW_H
