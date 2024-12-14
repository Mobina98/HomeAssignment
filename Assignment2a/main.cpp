/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment2a: reading and writing files
 */
#include <fstream>
#include <filesystem>
#include <iostream>

int main() {
	// Reading the input\output binary files
	std::ifstream infile("sourcein", std::ios::binary);
	std::ofstream outfile("sourceout", std::ios::binary);

	// Saving the file size and print
	std::size_t fsize = std::filesystem::file_size("sourcein");
	std::cout << "Size of binary file: " << fsize << '\n';

	// Declaring an array and reading
	char *arr = new char[fsize];
	infile.read(arr, fsize);

	// Expanding the array
	for (int i = 0; 2 * i < fsize; ++i) {
		std::swap(arr[i], arr[fsize - i - 1]);
	}

	// Writing the data to a new file
	outfile.write(arr, fsize);

	// Close the files and delete the array
	outfile.close();
	infile.close();
	delete[] arr;
	return 0;
}