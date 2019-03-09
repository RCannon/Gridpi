#include <iostream>
#include <cmath>

using namespace std;

double gridpi(unsigned npoints)     // calculates the number of points with dist <= 1
{
    unsigned counter = 0;   // counts the points
    unsigned i = 0;         // x- axis coordinate-incrimenter

    while (i < npoints)
    {
        unsigned j = 0;     // y-axis coordinate-incrimenter
        while (j <  npoints)
        {
            double dist = hypot(i, j);  // calculate dist of point
            if (dist <= (npoints)){     //
                ++counter;}             // count number of points with dist less than npints
            ++j;    // incriment y-axis
            }       
        ++i;        // incriment x-axis
        }           
    double count = static_cast<double>(counter);   // convert to double to calculate pi in decimals  
    count = 4 * count / (npoints * npoints);    // get full circle and divide by total number of points
    return count;
}

int main()
{
    cout << "how many points?\n";   //
    unsigned npoints;               // take in the number of points
    cin >> npoints;                 // 

    double pi = gridpi(npoints);    // do calculation and assign output to pi for printing to user

    cout << pi;     // print to user
    return 0;
}