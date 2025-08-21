#include "voice.h"

#include <iostream>
#include <ostream>

// Definition of the Voice class constructor
// Takes a string parameter 'voice' (e.g., "English", "Russian")
// Calls the set_voice method to initialize the _voice member variable
Voice::Voice(std::string voice) {
    set_voice(voice);
}

// Definition of the get_voice() getter method
// 'const' means this method does not modify the object's state
// Returns the value of the private _voice member variable
std::string Voice::get_voice() const {
    return _voice;
}

// Definition of the set_voice() setter method
// Takes a string parameter 'voice' to set a new value
// Assigns the value of the parameter 'voice' to the member variable '_voice'
// 'this->' explicitly refers to the current object's member, distinguishing it from the parameter name
void Voice::set_voice(std::string voice) {
    this->_voice = voice;
}

// Definition of the get_phrase() action method
// 'const' means this method does not modify the object's state
// Prints the current voice/language followed by a generic phrase to the console
bool Voice::get_phrase() const {
    std::cout << _voice << " and something else" << std::endl;
    return true;
}
