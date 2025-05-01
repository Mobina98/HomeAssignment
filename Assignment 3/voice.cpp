#include "voice.h"

#include <iostream>
#include <ostream>


Voice::Voice(std::string voice) {
    set_voice(voice);
}

std::string Voice::get_voice() const {
    return _voice;
}

void Voice::set_voice(std::string voice) {
    this->_voice = voice;
}

bool Voice::get_phrase() const {
    std::cout << _voice << " and something else" << std::endl;
    return true;
}