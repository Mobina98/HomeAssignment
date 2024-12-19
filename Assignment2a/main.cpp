/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment2a: reading and writing files
 */
#include <fstream>
#include <filesystem>
#include <iostream>


int main() {

	std::ifstream infile("sourcein.bin", std::ios::binary);
	std::ofstream outfile("sourceout.bin", std::ios::binary);

	std::size_t fsize = std::filesystem::file_size("sourcein.bin");
	std::cout << "Size of binary file: " << fsize << '\n';

	char *arr = new char[fsize];
	infile.read(arr, fsize);


	for (int i = 0; 2 * i < fsize; ++i) {
		std::swap(arr[i], arr[fsize - i - 1]);
	}

	outfile.write(arr, fsize);


	outfile.close();
	infile.close();
	delete[] arr;
	return 0;
}