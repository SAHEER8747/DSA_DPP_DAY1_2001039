#include <iostream>
using namespace std;

int main() {
  int x, i;
  cout << "Enter a number: ";
  cin >> x;
  cout << "Enter the bit position to clear (0-based): ";
  cin >> i;
  
  int mask = ~(1 << i); 
  int result = x & mask; 
  
  cout << "The new number with the " << i << "-th bit cleared is " << result << endl;
  
  return 0;
}
