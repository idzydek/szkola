#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

void is_even(int num) {
    if (num % 2 == 0) {
        cout << num << " : parzyste\n";
    } else {
        cout << num << " : nieparzyste\n";
    }
}

int num_in_int(int num) { 
    int digits = 0;
    if (num == 0) return 1;
    while (num > 0) {
        digits++;
        num /= 10;
    }
    return digits;
}

int whitespace(int n, int m) {
    return num_in_int(n) - num_in_int(m);
}


void simulation(int num1, int num2) {
    vector<string> results;

    int shift = 0;
    int temp2 = num2;
    while (temp2 > 0) {
        int digit2 = temp2 % 10;
        temp2 /= 10;

        int result = num1 * digit2;
        string result_str = to_string(result);

        result_str.append(shift, ' ');
        results.push_back(result_str);

        shift++;
    }

    for (size_t i = 0; i < results.size(); ++i) {
        cout << setw(whitespace(num1, num2) + num_in_int(num1)) << results[i] << endl;
    }

    cout << string(max(num_in_int(num1), num_in_int(num1 * num2)), '-') << endl;

    cout << setw(whitespace(num1, num2) + num_in_int(num1)) << num1 * num2 << endl;
}

int main() {
    cout << "Podaj liczby ktore chcesz pomnozyc: \n";
    int num1, num2;
    cin >> num1 >> num2;

    cout << "----------------------------------\n";

    is_even(num1);
    is_even(num2);

    cout << "----------------------------------\n";

    cout << num1 << endl << setw(num_in_int(num1) + whitespace(num1, num2)) << num2 << endl << string(num_in_int(num1), '-') << endl;

    simulation(num1, num2);

    return 0;
}
