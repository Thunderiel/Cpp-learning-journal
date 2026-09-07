#include <iostream>
#include <cmath>
using namespace std;
// Write a while loop that prints all powers of 2 that are less than a given number n. For example, if n is 100, print 1 2 4 8 16 32 64.
// This was the first program I wrote independently.
// I initially misunderstood "powers of 2" and created a repeated-squaring
// sequence. After testing it, I corrected the pattern.
/*int main()
{
    cout << "n: " << endl;
    int n;
    cin >> n;

    int powers = 2;

    while (powers <= 100)
    {
        cout << powers << " ";
        powers = pow(powers, 2);
    }

    cout << endl;

    return 0;
}*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "n: " << endl;
    int n;
    cin >> n;

    int powers = 1;

    // Correction 1:
    // The loop now uses the number entered by the user.
    while (powers < n)
    {
        cout << powers << " ";

        // Correction 2:
        // Multiplying by 2 produces the next power of 2:
        // 2 -> 4 -> 8 -> 16 -> 32...
        powers = powers * 2;
    }

    cout << endl;

    return 0;
}