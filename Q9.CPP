#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter the number of piles: ";
    cin >> n;

    int piles[n]; 
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the number of stones in pile " << i+1 << ": ";
        cin >> piles[i];
    }

    int nim_sum = 0;
    for(int i = 0; i < n; i++)
    {
        nim_sum ^= piles[i];
    }

    if(nim_sum == 0)
    {
        cout << "The second player wins" << endl;
    }
    else
    {
        cout << "The first player wins" << endl;
    }

    return 0;
}
