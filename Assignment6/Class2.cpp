#include "Class2.h"
#include <iostream>

bool Class2::bar(int, const std::vector<float> &vector) {
    return !vector.empty();
}


int Class2::c_2_1() {
    return 3;
}

float Class2::c_2_2() {
    return 3.0f;
}

void Class2::c_2_3() {
    std::cout << "Class2 c_i_3" << std::endl;
}