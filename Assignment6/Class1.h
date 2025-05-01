#ifndef CLASS1_H
#define CLASS1_H

#include <vector>

class Class1 {
public:
    Class1() = default;

    Class1(const Class1 &other) = default;

    ~Class1() = default;

    static bool bar(int number, const std::vector<float> &vector);

    static int c_1_1();

    static float c_1_2();

    static void c_1_3();
};


#endif