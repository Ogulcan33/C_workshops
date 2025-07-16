/*
*****************************************************************************
                          Workshop - #2 (P1)

*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	
    const double TAX = 0.13;
    const char patSize = 'S';
    double shirt1, shirt2, shirt3;
    int pattyNum;
    int shirt1_cent, subTotal, total;
    int sub_total_int, sub_total_frac, total_int, total_frac, total_tax_int, total_tax_frac;
    
    
    printf("Set Shirt Prices\n================\n");
    
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &shirt1);
    
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &shirt2);
    
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &shirt3);
    
    printf("\nShirt Store Price List\n======================\n");
    
    printf("SMALL  : $%0.2f",shirt1);
    printf("\nMEDIUM : $%0.2f",shirt2);
    printf("\nLARGE  : $%0.2f\n\n",shirt3);
    

    printf("Patty's shirt size is '%c'\nNumber of shirts Patty is buying: ", patSize);
    scanf("%d", &pattyNum);
    
    
    printf("\nPatty's shopping cart...\n");
    printf("Contains : %d shirts\n", pattyNum);
   
    shirt1_cent = (int)(shirt1 * 100 + 0.5);
    subTotal = (shirt1_cent * pattyNum);
    
    total_tax_int = (int)(subTotal*TAX) / 100;
    total_tax_frac = (int)(((subTotal*TAX)+0.5)) % 100;
    
    
    
    sub_total_int = (subTotal) / 100;
    sub_total_frac = (subTotal) % 100;
    
    total = (int)(subTotal*TAX + 0.5) + subTotal;
    
    total_int = total / 100;
    total_frac = total % 100;
    
    printf("Sub-total: $%3d.%d\n", sub_total_int, sub_total_frac*100);
    printf("Taxes    : $%3d.%d\n", total_tax_int, total_tax_frac*100);
    printf("Total    : $%3d.%d", total_int, total_frac*100);
    
    
    
    
    
    
    
    
    

    return 0;
}
 
