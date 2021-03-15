/*
 * Creator: adhamlin
 * Date: 03/14/2021
 * Project: An aplication that calculates baker's formaula precntaged in to recipes in grams
*/

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // get user input
    cout << "===== Baker's Percent Formula Convertion Application =====" << endl;
    cout << "Enter the flour weight in grams(i.e., 500.0): ";
    float FlourInputBase;
    cin >> FlourInputBase;

    float EnterWaterPercent;
    cout << "Enter water hydration percentage(i.e., 63.5): ";
    cin >> EnterWaterPercent;

    float EnterSaltPercent;
    cout << "Enter salt percent(i.e., 2.1): ";
    cin >> EnterSaltPercent;

    float EnterYeastPercent;
    cout << "Enter yeast percent(i.e., 0.9): ";
    cin >> EnterYeastPercent;

    float EnterStarterPercent;
    cout << "Enter Sourdough starter percent(i.e., 25.0, or 0 if none): ";
    cin >> EnterStarterPercent;

    float EnterFatOilPercent;
    cout << "Enter fat or oil percent(i.e., 1.5, or 0 if none): ";
    cin >> EnterFatOilPercent;

    // calculate baker's volume percentages to a recipe in grams
    float WaterResultsQuantity = (EnterWaterPercent / 100) * FlourInputBase;

    float SaltResultsQuantity = (EnterSaltPercent / 100) * FlourInputBase;

    float YeastResultsQuantity = (EnterYeastPercent / 100) * FlourInputBase;

    float StarterResultsQuantity = (EnterStarterPercent / 100) * FlourInputBase;

    float FatOilResultsQuantity = (EnterFatOilPercent / 100) * FlourInputBase;

    cout << "\n";  // space in output
    cout << "===== Your Baker's Formula in grams =====" << endl;

    // std::cout << std::setprecision(2)
    cout << fixed << setprecision(2) << "\tFlour Amount: 100" << "% | " << FlourInputBase << "g" << endl;
    cout << fixed << setprecision(2) << "\tHydration/Water: " << EnterWaterPercent << "% | " << WaterResultsQuantity << "g" << endl;
    cout << fixed << setprecision(2) << "\tSalt: " << EnterSaltPercent << "% | " << SaltResultsQuantity << "g" << endl;
    cout << fixed << setprecision(2) << "\tYeast: " << EnterYeastPercent << "% | " << YeastResultsQuantity << "g" << endl;
    cout << fixed << setprecision(2) << "\tStarter: " << EnterStarterPercent << "% | " << StarterResultsQuantity << "g" << endl;
    cout << fixed << setprecision(2) << "\tFat or Oil: " << EnterFatOilPercent << "% | " << FatOilResultsQuantity << "g" << endl;

    cout << "\n" << endl;  // space in output
    return 0;
}
