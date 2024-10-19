#include <iostream>
#include <stdexcept>  // For exception handling

using namespace std;

int main() {
    int num;

    try {
        cout << "Enter a number: ";
        cin >> num;

        // Check if input failed (i.e., if the input wasn't a valid integer)
        if (cin.fail()) {
            throw invalid_argument("Invalid input, not an integer.");
        }

        // Debugging output to confirm the entered number
        cout << "You entered: " << num << endl;

        // Conditional checks for the colors
        if (num >= 0 && num <= 4) {
            cout << "The color you selected is: Blue" << endl;
        } else if (num >= 5 && num <= 10) {
            cout << "The color you selected is: Red" << endl;
        } else if (num >= 11 && num <= 14) {
            cout << "The color you selected is: Green" << endl;
        } else {
            cout << "Your number does not correspond to a color." << endl;
        }

    } catch (const invalid_argument &e) {
        // Catch invalid input and display an error message
        cout << e.what() << endl;
    }

    return 0;
}
