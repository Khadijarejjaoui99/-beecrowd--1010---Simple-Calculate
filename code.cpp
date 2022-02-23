// Solution of 1010 - Simple Calculate with Bonus in beecrowd
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
 
    int firstProductCode, secondProductCode, firstProductNumberOfUnits, secondProductNumberOfUnits;
    float firstProductPriceOfUnit,secondProductPriceOfUnit,VALOR;
    cin>> firstProductCode >> firstProductNumberOfUnits >> firstProductPriceOfUnit;
    cin>> secondProductCode >> secondProductNumberOfUnits >> secondProductPriceOfUnit;
    VALOR = (firstProductNumberOfUnits * firstProductPriceOfUnit) + (secondProductNumberOfUnits * secondProductPriceOfUnit);
    
    cout << "VALOR A PAGAR: R$ " <<fixed<< setprecision(2)<<VALOR<<"\n";
    system("pause");
    return 0;
}