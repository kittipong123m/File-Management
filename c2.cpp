#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("684244114.txt");

  // Write to the file
  MyFile << "684244114 กิติพงษ์ ตุ่นจิตต์!";

  // Close the file
  MyFile.close();
}
