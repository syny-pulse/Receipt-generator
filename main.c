#include <stdio.h>
#include <string.h>

int main(void) {
    int purchaseTotal, discountrate, subFinalPay, finalPay, salesTax;
    char isMusicTeacher[4];
    printf("Enter the purchase total: ");
    scanf("%d", &purchaseTotal);
    printf("Is the customer a music teacher? (true/false): ");
    scanf("%s", &isMusicTeacher);
    if(isMusicTeacher == 'true') {
        if(purchaseTotal >= 100) {
            discountrate = 0.12;
        } else {
            discountrate = 0.1;
        }
    } else {
        discountrate = 0;
    }

    subFinalPay = purchaseTotal * (1-discountrate);
    salesTax = subFinalPay * (1 + 0.05);
    finalPay = subFinalPay + salesTax;
    printf("The final Pay is %d", finalPay);

    return 0;
}