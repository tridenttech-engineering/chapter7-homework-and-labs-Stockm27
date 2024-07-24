//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <Mathias Stock> on <7-23-2024>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
int day = 0;
int NUMtexts = 0;
int DAILY = 0;
double AVG = 0.0;

for (day = 1; day < 8; day += 1)
{
    cout << "How many texts did you send on day " << day << "? ";
    cin >> DAILY;
    NUMtexts += DAILY;
} //end for

AVG = static_cast<double>(NUMtexts) / (day - 1) ;
cout << fixed << setprecision(0);
cout << endl << "You sent approximately" << AVG << "texts per day." << endl;

    return 0;
}   //end of main function