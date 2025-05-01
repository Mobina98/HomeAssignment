#ifndef CLASS3_H
#define CLASS3_H

#include <vector>

class Class3 {
public:
    Class3() = default;

    ~Class3() = default;

    static bool bar(int number, const std::vector<float> &vector);

    static int c_3_1();

    static float c_3_2();

    static void c_3_3();
};


#endif