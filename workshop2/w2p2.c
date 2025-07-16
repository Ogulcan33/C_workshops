/*
*****************************************************************************
                          Workshop - #2 (P2)


*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    double shirt1, shirt2, shirt3;
    int patNum, tomNum, salNum;
    int shirt1_cent, shirt2_cent, shirt3_cent;
    
    int subTotalPat, subTotalTom, subTotalSal;
    int totalPat, totalTom, totalSal;
    float genTotal, genSubTotal, genTax;
    
    const float toonie = 2.0, loonie = 1.0, quarter = 0.25, dime = 0.10, nickel = 0.05, penny = 0.01;
    int totalToonie, totalLoonie, totalQuarter, totalDime, totalNickel, totalPenny;
    float remainder;
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
    scanf("%d", &patNum);
    
    printf("\nTommy's shirt size is '%c'\nNumber of shirts Tommy is buying: ", tomSize);
    scanf("%d", &tomNum);
    
    printf("\nSally's shirt size is '%c'\nNumber of shirts Sally is buying: ", salSize);
    scanf("%d", &salNum);
    
    
    
   
    shirt1_cent = (int)(shirt1 * 100 + 0.5);
    shirt2_cent = (int)(shirt2 * 100 + 0.5);
    shirt3_cent = (int)(shirt3 * 100 + 0.5);
    subTotalPat = (shirt1_cent * patNum);
    subTotalTom = (shirt3_cent * tomNum);
    subTotalSal = (shirt2_cent * salNum);
    
       
   
    
    
    totalPat = (int)(subTotalPat*TAX + 0.5) + subTotalPat;
    totalTom = (int)(subTotalTom*TAX + 0.5) + subTotalTom;
    totalSal = (int)(subTotalSal*TAX + 0.5) + subTotalSal;
    
    
    
    
    
    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %7.2lf00 %7.2lf00 %7.2lf00\n",patSize,shirt1,patNum,(float)subTotalPat/100, TAX*subTotalPat/100, (float)totalPat/100);
    printf("Sally    %-4c %5.2lf %3d %7.2lf00 %7.2lf00 %7.2lf00\n",salSize,shirt2,salNum,(float)subTotalSal/100, TAX*subTotalSal/100, (float)totalSal/100);
    printf("Tommy    %-4c %5.2lf %3d %7.2lf00 %7.2lf00 %7.2lf00\n",tomSize,shirt3,tomNum,(float)subTotalTom/100, TAX*subTotalTom/100, (float)totalTom/100);
    
    
    
    
    genTax = (TAX*subTotalPat/100) + (TAX*subTotalSal/100) + (TAX*subTotalTom/100);
    genSubTotal = ((float)subTotalPat/100) + ((float)subTotalSal/100) + ((float)subTotalTom/100);
    genTotal = ((float)totalPat/100) + ((float)totalSal/100) + ((float)totalTom/100);
    
    
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("                         %3.2lf00   %3.2lf00  %3.2lf00\n", genSubTotal, genTax, genTotal);
    
    printf("\nDaily retail sales represented by coins\n");
    printf("=======================================\n\n");
    
    
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("              %3.4lf\n", genSubTotal);
    
    totalToonie = (int)(genSubTotal/toonie);
    remainder = genSubTotal-toonie*totalToonie;
    totalLoonie = (int)((remainder)/loonie);
    remainder = remainder - loonie*totalLoonie;   
    totalQuarter = (int)((remainder)/quarter);
    remainder = remainder - quarter*totalQuarter;
    totalDime =  (int)((remainder)/dime);
    remainder = remainder - dime*totalDime;
    totalNickel = (int)((remainder)/nickel);
    remainder = remainder - nickel*totalNickel;
    totalPenny = (int)((remainder)/penny);
    
    printf("Toonies  %3d %9.4lf\n", totalToonie, toonie);
    printf("Loonies  %3d %9.4lf\n", totalLoonie, loonie);
    printf("Quarters %3d %9.4lf\n", totalQuarter, quarter);
    printf("Dimes    %3d %9.4lf\n", totalDime, dime);
    printf("Nickels  %3d %9.4lf\n", totalNickel, nickel);
    printf("Pennies  %3d %9.4lf\n", totalPenny, penny);
    printf("\nAverage cost/shirt: $%2.4lf\n\n", genSubTotal/13);
    
    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("              %3.4lf\n", genTotal);
    
    totalToonie = (int)(genTotal/toonie);
    remainder = genTotal-toonie*totalToonie;
    totalLoonie = (int)((remainder)/loonie);
    remainder = remainder - loonie*totalLoonie;
    totalQuarter = (int)((remainder)/quarter);
    remainder = remainder - quarter*totalQuarter;
    totalDime =  (int)((remainder)/dime);
    remainder = remainder - dime*totalDime;
    totalNickel = (int)((remainder)/nickel);
    remainder = remainder - nickel*totalNickel;
    totalPenny = (int)((remainder)/penny);
    
    
    printf("Toonies  %3d %9.4lf\n", totalToonie, toonie);
    printf("Loonies  %3d %9.4lf\n", totalLoonie, loonie);
    printf("Quarters %3d %9.4lf\n", totalQuarter, quarter);
    printf("Dimes    %3d %9.4lf\n", totalDime, dime);
    printf("Nickels  %3d %9.4lf\n", totalNickel, nickel);
    printf("Pennies  %3d %9.4lf\n", totalPenny, penny);
    printf("\nAverage cost/shirt: $%2.4lf", genTotal/13);
    
    
    

    return 0;
}
