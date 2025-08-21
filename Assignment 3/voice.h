#ifndef VOICE_H
#define VOICE_H
#include <string>

class Voice {
public:
    Voice(std::string);    // Constructor declaration: Creates a Voice object, requires a string parameter

    // Destructor declaration: '= default' lets the compiler generate a standard destructor automatically
    // This is safe because this class doesn't manage any dynamic memory itself
    ~Voice() = default;

    // Getter method declaration: Returns the value of the private _voice member
    // 'const' means this method will not modify the object's state
    std::string get_voice() const;

    // Setter method declaration: Sets a new value for the private _voice member
    void set_voice(std::string voice);

    // Action method declaration: Likely prints a phrase using the stored voice
    bool get_phrase() const;

// 'private:' members are only accessible from within the class's own methods
// Private member variable: Stores the voice data (e.g., "English", "Russian")
// This variable is encapsulated and can only be changed via set_voice() and read via get_voice()
private:
    std::string _voice;
};


#endif //VOICE_H
