#include "voice.h"
#include <iostream>
#include <ostream>


Voice::Voice(std::string voice) {
    set_voice(voice);

    std::cout << "Voice are enabled." << std::endl;

    std::cout << get_class_name() << "Method: " << __func__ << std::endl;
}

std::string Voice::get_voice() const {
    return _voice;
}

void Voice::set_voice(std::string voice) {
    this->_voice = voice;
}


bool Voice::get_phrase() const {
    std::cout << _voice << " and something else" << std::endl;

    std::cout << get_class_name() << "Method: " << __func__ << std::endl;

    return true;
}

std::string Voice::get_class_name() const {
    std::string name = "Class: Voice\n";
    return name;
}