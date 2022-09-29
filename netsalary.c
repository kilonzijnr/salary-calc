#include <stdio.h>

int main() {

    /*Initialising point for the floating Integers to be used*/
    float bsalary, bonus, HRA, t_allowance, allowances;
    float dTax;
    float Netsalary;

    /*Prompts the User to enter the Basic Salary*/
    printf("Enter the Basic Salary:\t ");
    scanf("%f", &bsalary);

    /*Prompts the user to enter the HRA */
    printf("Enter the HRA: ");
    scanf("%f", &HRA);

    /*Prompts the user to enter the Transport Allowance*/
    printf("Enter the Transport Allowance: ");
    scanf("%f", &t_allowance);

    /*Prompts the user to enter any other allowance fee*/
    printf("Enter any other Allowance: ");
    scanf("%f", &allowances);

    /*Calculates the percentage of the Tax from the Basic Salary*/
    dTax = (bsalary*30)/100;

    /*Calculates the bonus as a percentage from the Basic salary*/
    bonus = (bsalary*12)/100;

    /*General Fomular to calculate the total Netsalary after Deductions*/
    Netsalary = bsalary + bonus + HRA + t_allowance + allowances - (dTax);

    /*Output point for the calculated NetSalary*/
    printf("The Net Salary is: Ksh.%0.2f\n", Netsalary);
    return 0;

}
//INITIALS CHEAT SHEET.

// 1.HRA - House Rent Allowance.
// 2.bsalary - Basic Salary.
// 3.t_allowance - Transport Allowance.
// 4.dtax - Taxation (30%).
