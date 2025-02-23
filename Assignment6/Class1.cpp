#include "Class1.h"
#include <iostream>

bool Class1::bar(int number, const std::vector<float> &) {
    return number > 0;
}

int Class1::c_1_1() {
    return 1;
}

float Class1::c_1_2() {
    return 1.0f;
}

void Class1::c_1_3() {
    std::cout << "Positive_checker c_i_3" << std::endl;
}