#include <iostream>
#include <stdexcept>
using namespace std;

class LoanException : public exception {
    string message;
public:
    LoanException(const string& msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

void checkEligibility(int age, double income, int creditScore) {
    if (age < 21 || age > 60)
        throw LoanException("Error: Age must be between 21 and 60.");
    if (income <= 30000)
        throw LoanException("Error: Monthly income must be above Rs. 30,000.");
    if (creditScore <= 600)
        throw LoanException("Error: Credit score must be above 600.");

    cout << "Congratulations! You are eligible for a loan." << endl;
}

int main() {
    int age, creditScore;
    double income;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your monthly income: ";
    cin >> income;
    cout << "Enter your credit score: ";
    cin >> creditScore;

    try {
        checkEligibility(age, income, creditScore);
    } catch (LoanException& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
