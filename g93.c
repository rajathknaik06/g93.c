/*Sam, a programming enthusiast, wants to write a program involving global and local variables along with a function. The goods and services tax rate (18%) is declared as a global double datatype variable. If the purchase amount exceeds 1000, the function adds the GST to the original purchase amount; otherwise, it returns the original purchase amount. 



Help him to write a program to determine the total amount based on the specified conditions.



Example: 

If the amount is 950.50, it does not exceed 1000 so 950.50 should be printed as such.
If the amount is 1100.0, it exceeds 1000 so 18% GST is applied which is 180. So the calculated GST is 1100.0 + 180.0 = 1298.00.
Input format :
The input consists of a double value representing the purchase amount.

Output format :
The output displays "Total amount: " followed by a double value representing the calculated amount, rounded to two decimal places.*/

#include <stdio.h>

double gst = 0.18;  
double calculateTotal(double purchase) {
    if (purchase > 1000) {
        return purchase + (purchase * gst);
    } else {
        return purchase;
    }
}

int main() {
    double purchase;
    scanf("%lf", &purchase);
    double totalAmount = calculateTotal(purchase);
    printf("Total amount: %.2lf\n", totalAmount);
    return 0;
}
