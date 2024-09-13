#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  // create a vector of integers
  vector<int> v = {1, 2, 3, 4, 5};

  // print the original vector
  cout << "Original vector: ";
  for (int x : v) {
    std::cout << x << " ";
  }
  std::cout << "\n";

  // reverse the vector using std::reverse
  std::reverse(v.begin(), v.end());

  // print the reversed vector
  std::cout << "Reversed vector: ";
  for (int x : v) {
    std::cout << x << " ";
  }
  std::cout << "\n";

  return 0;
}
//mid square using linear probabing c