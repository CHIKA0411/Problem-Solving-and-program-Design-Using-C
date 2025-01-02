#include <stdio.h>
#include <math.h>

void calculate_monthly_payment() {
    // Variables for user input
    double purchase_price, down_payment, annual_interest_rate, principal, monthly_interest_rate, monthly_payment;
    int total_payments;

    // Prompting user for inputs
    printf("Enter the purchase price of the car: ");
    scanf("%lf", &purchase_price);

    printf("Enter the down payment amount: ");
    scanf("%lf", &down_payment);

    printf("Enter the annual interest rate (as a percentage, e.g., 5 for 5%%): ");
    scanf("%lf", &annual_interest_rate);

    printf("Enter the total number of payments (e.g., 36, 48, 60): ");
    scanf("%d", &total_payments);

    // Calculate the amount borrowed (principal)
    principal = purchase_price - down_payment;

    // Calculate the monthly interest rate
    monthly_interest_rate = annual_interest_rate / 100 / 12;

    // Calculate the monthly payment using the formula
    if (monthly_interest_rate == 0) {
        // Handle the case for 0% interest rate
        monthly_payment = principal / total_payments;
    } else {
        monthly_payment = (monthly_interest_rate * principal) / (1 - pow(1 + monthly_interest_rate, -total_payments));
    }

    // Display results
    printf("Amount Borrowed: $%.2f\n", principal);
    printf("Monthly Payment: $%.2f\n", monthly_payment);
}

int main() {
    calculate_monthly_payment();
    return 0;
}
