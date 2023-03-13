#include <iostream>
using namespace std;

int main() {
  int x, i;
  cout << "Enter a number: ";
  cin >> x;
  cout << "Enter the bit position to find (0-based): ";
  cin >> i;
  
  int mask = 1 << i; 
  int bit = (x & mask) >> i;
  cout << "The " << i << "-th bit of " << x << " is " << bit << endl;
  
  return 0;
}
