#include <iostream>

using namespace std;

int main() {
    int n;

    // Ask the user for the number of terms
    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    // Initialize the first two terms
    int a = 0, b = 1;

    // Print the first term
    cout << "Fibonacci Series: ";

    // Handle the case when n is 1
    if (n == 1) {
        cout << a << endl;
        return 0;
    }

    // Print the first two terms
    cout << a << " " << b << " ";

    // Generate and print the remaining terms
    for (int i = 2; i < n; ++i) {
        int next = a + b; // Compute the next term
        cout << next << " "; // Print the next term
        a = b; // Update a to the next term in the series
        b = next; // Update b to the next term in the series
    }

    cout << endl; // End with a newline
    return 0;
}
