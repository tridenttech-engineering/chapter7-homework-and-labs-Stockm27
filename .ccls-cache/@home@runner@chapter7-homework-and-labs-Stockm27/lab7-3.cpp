//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <Mathias Stock> on <7-23-2024>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
int day = 1;
int NUMtexts = 0;
int DAILY = 0;
double AVG = 0.0;

while (day < 8)
{
    cout << "How many texts did you send on day " << day << "? ";
    cin >> DAILY;
    NUMtexts += DAILY;
    day += 1;
} //end while

AVG = static_cast<double>(NUMtexts) / (day - 1) ;
cout << fixed << setprecision(0);
cout << endl << "You sent approximately" << AVG << "texts per day." << endl;

    return 0;
}   //end of main function