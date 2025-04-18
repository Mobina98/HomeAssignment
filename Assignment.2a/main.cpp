//Mobina Ahmaimasoud, st067173@student.spbu.ru, 24.B83

#include "header.h"

int main() {
    // File paths
    const char* inputFile = "input.bin";
    const char* outputFile = "output.bin";
    
    // Open the binary file using the provided format
    std::ifstream infile;
    infile.open(inputFile, std::ios::binary | std::ios::in);
    if (!infile) {
        std::cerr << "Error opening input file!" << std::endl;
        return 1;
    }

    // Get the file size
    std::size_t fileSize = std::filesystem::file_size(inputFile);

    // Print the file size in bytes
    std::cout << "File size: " << fileSize << " bytes" << std::endl;

    // allocate an array to hold file data
    char* buffer = new char[fileSize];

    // reading file
    infile.read((char*)buffer, fileSize);
    infile.close();

    // Reverse the array in-place
    for (std::size_t i = 0; i < fileSize / 2; ++i) {
        std::swap(buffer[i], buffer[fileSize - 1 - i]);
    }

    // Open the output file and write the reversed array using the provided format
    std::ofstream outfile;
    outfile.open(outputFile, std::ios::binary | std::ios::out);
    if (!outfile) {
        std::cerr << "Error opening output file!" << std::endl;
        delete[] buffer; // Cleanup before exiting
        return 1;
    }

    outfile.write((char*)buffer, fileSize);
    outfile.close();

    // Clean up allocated memory
    delete[] buffer;

    std::cout << "File reversed and saved to output.bin!" << std::endl;

    return 0;
}