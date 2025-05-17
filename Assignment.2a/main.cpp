//Mobina Ahmaimasoud, st067173@student.spbu.ru, 24.B83

#include "header.h"

int main() {
    // File paths
    const char* inputFile = "input.bin";  // Path to the input binary file
    const char* outputFile = "output.bin"; // Path to the output binary file (reversed data)
    
    // Verify input file exists using C++17 filesystem library
    if (!std::filesystem::exists(inputFile)) {
        std::cerr << "Input file does not exist!" << std::endl;  // Print error if file not found
        return 1;  // Exit with error code 1
    }

    // Open the binary file in binary and input mode
    std::ifstream infile;  // Input file stream object
    infile.open(inputFile, std::ios::binary | std::ios::in);  // Open in binary read mode

    // Check if file opened successfully
    if (!infile) {
        std::cerr << "Error opening input file!" << std::endl;
        return 1;
    }  // Exit if opening failed

    // Get the file size in bytes using filesystem library
    std::size_t fileSize = std::filesystem::file_size(inputFile);

    // Print the file size to the console
    std::cout << "File size: " << fileSize << " bytes" << std::endl;

    // Dynamically allocate a buffer to store the entire file content
    char* buffer = new char[fileSize];  // Allocate memory based on file size
    
    // Read the entire file content into the buffer
    infile.read(buffer, fileSize);
    
    // Check if read was successful
    if (!infile) {
        std::cerr << "Error reading input file!" << std::endl;
        delete[] buffer;  // Free allocated memory before exit
        infile.close();   // Close the file
        return 1;  // Exit with error
    }
    
    infile.close();  // Close the input file (no longer needed)

    // Reverse the buffer in-place (swap first and last bytes, then move inward)
    for (std::size_t i = 0; i < fileSize / 2; ++i) {
        std::swap(buffer[i], buffer[fileSize - 1 - i]);  // Swap positions i and (size-1-i)
    }

   // Open the output file in binary and output mode
    std::ofstream outfile;
    outfile.open(outputFile, std::ios::binary | std::ios::out);  // Open in binary write mode
    if (!outfile) {
        std::cerr << "Error opening output file!" << std::endl;
        delete[] buffer; // Cleanup before exiting
        return 1;
    }

    outfile.write(buffer, fileSize);  // Write the reversed buffer to the output file
    
    // Check if write was successful
    if (!outfile) {
        std::cerr << "Error writing to output file!" << std::endl;
        delete[] buffer;
        outfile.close();
        return 1;
    }
    
    outfile.close();

    // Clean up allocated memory
    delete[] buffer;

    std::cout << "File reversed and saved to output.bin!" << std::endl;

    return 0;
}
