#include <iostream>
#include <vector>
#include <bitset>
#include <chrono>

// Original code using std::vector<bool>
void original_approach(int size) {
  auto start = std::chrono::high_resolution_clock::now();
  std::vector<bool> vec(size);
  for (int i = 0; i < size; ++i) {
    vec[i] = i % 2 == 0;
  }
  auto end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
  std::cout << "Original approach time: " << duration.count() << " microseconds" << std::endl;
}

// Improved approach using std::vector<char>
void improved_approach(int size) {
  auto start = std::chrono::high_resolution_clock::now();
  std::vector<char> vec(size);
  for (int i = 0; i < size; ++i) {
    vec[i] = i % 2 == 0;
  }
  auto end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
  std::cout << "Improved approach time: " << duration.count() << " microseconds" << std::endl;
}

int main() {
  int size = 1000000; // Increase size for more dramatic effect
  original_approach(size);
  improved_approach(size);
  return 0;
}
