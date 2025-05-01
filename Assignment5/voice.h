#ifndef VOICE_H
#define VOICE_H
#include <string>

class Voice {
public:
    Voice(std::string);

    ~Voice() = default;


    std::string get_voice() const;

    void set_voice(std::string voice);

    bool get_phrase() const;


    std::string get_class_name() const;

private:
    std::string _voice;
};


#endif //VOICE_H