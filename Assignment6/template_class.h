#ifndef TEMPLATE_CLASS_H
#define TEMPLATE_CLASS_H
#include <vector>


template<class T>
class Template_class {
public:
    Template_class(const int number, const std::vector<float> &vector)
        : _number(number), _vector(vector) {
    };

    ~Template_class() = default;

    bool foo() {
        return _instance.bar(_number, _vector);
    }

private:
    T _instance{};
    int _number;
    std::vector<float> _vector;
};

template<>
class Template_class<int> {
public:
    Template_class(const int number, const std::vector<float> &vector)
        : _number(number), _vector(vector) {
    }

    bool foo() {
        return true;
    }

private:
    int _number;
    std::vector<float> _vector;
};


template<>
class Template_class<double> {
public:
    Template_class(const int number, const std::vector<float> &vector)
        : _number(number), _vector(vector) {
    }

    bool foo() {
        return false;
    }

private:
    int _number;
    std::vector<float> _vector;
};


#endif //TEMPLATE_CLASS_H