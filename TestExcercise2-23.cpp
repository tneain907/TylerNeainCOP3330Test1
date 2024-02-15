#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double buyingPrice, sellingPrice;
    int numberOfShares;
    const double serviceChargeRate = 0.015; // 1.5%

    // Input
    cout << "Enter the buying price of each share: ";
    cin >> buyingPrice;
    cout << "Enter the selling price of each share: ";
    cin >> sellingPrice;
    cout << "Enter the number of shares sold: ";
    cin >> numberOfShares;

    // Calculations
    double totalInvested = buyingPrice * numberOfShares;
    double totalReceived = sellingPrice * numberOfShares;
    double purchaseServiceCharge = totalInvested * serviceChargeRate;
    double sellingServiceCharge = totalReceived * serviceChargeRate;
    double totalServiceCharges = purchaseServiceCharge + sellingServiceCharge;
    double netGainLoss = totalReceived - totalInvested - totalServiceCharges;

    // Output
    cout << fixed << setprecision(2); // Format output to two decimal places
    cout << "Total amount invested: $" << totalInvested << endl;
    cout << "Total amount received: $" << totalReceived << endl;
    cout << "Total service charges: $" << totalServiceCharges << endl;
    cout << "Amount gained or lost: $" << netGainLoss << endl;

    return 0;
}
