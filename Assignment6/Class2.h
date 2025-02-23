#ifndef CLASS2_H
#define CLASS2_H

#include <vector>


class Class2 {
public:
    Class2() = default;

    ~Class2() = default;

    static bool bar(int number, const std::vector<float> &vec);

    static int c_2_1();

    static float c_2_2();

    static void c_2_3();
};


#endif