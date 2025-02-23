#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "assignment2a.h"


void binaryReadWrite(const std::string &fileName) {

   unsigned long fileSize=std::filesystem::file_size(fileName);

   std::ifstream inputFile(fileName, std::ios::binary);

    if (!inputFile.is_open()) {
        std::cerr << "Error, file not openned" << std::endl;
        return;
    }

   auto buffer = new char[fileSize];

    inputFile.read(buffer,fileSize);
    inputFile.close();

   auto reverse_buffer = new char[fileSize];

    for (size_t i = 0; i < fileSize; ++i) {
        reverse_buffer[fileSize - 1 - i] = buffer[i];
    }


    std::ofstream outputFile("output_file.bin", std::ios::binary);
    outputFile.write(reverse_buffer,fileSize);
    outputFile.close();


    delete[] buffer;
    delete[] reverse_buffer;
}

int main () {
    binaryReadWrite("example_file.bin");
}