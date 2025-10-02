#include <stdio.h>

int main(){
    int account,total_account;
    printf("Enter account number: ");
    scanf("%d", &account);
    total_account = account * 4;
    printf("Tip amount: %.0f\n", total_account * 0.15);
}