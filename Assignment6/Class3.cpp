#include "Class3.h"
#include <iostream>


bool Class3::bar(int number, const std::vector<float> &vec) {
    return number == static_cast<int>(vec.size()) * -1;
}


int Class3::c_3_1() {
    return 2;
}

float Class3::c_3_2() {
    return 2.0f;
}

void Class3::c_3_3() {
    std::cout << "Class c_i_3" << std::endl;
}