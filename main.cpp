/** Sean Gurr
 *  C00221886
 *  Ex. 5
 *  Method of Least Squares of Linear Regression
 *  27/09/2017
 */

/**< Preprocessor directives */
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

/**< Main function */
int main()
{
    /**< variable declarations */
    int n,i;
    double m,c,Ex,Ey,Exy,Ex2,meanx,meany;

    double x[100]={0};
    double y[100]={0};

    /**< do while loop criteria */
    do
    {
        cout<< "Enter any amount of data points between 1 - 100: " ;
        cin>> n;
    }
    while ((n<= 0) || (n > 100));

    /**< Initialise to zero */
    i = 0;
    Ex = 0;
    Ey = 0;
    Exy = 0;
    Ex2 = 0;

    /**< For loop criteria pertaining to x and y */
    for (i=0;i<n;i++)
    {
        cout<< "\nDatapoint " << i << " x and y: " ;
        cin>> x[i] >> y[i];
    }

    /**< For loop criteria to display values entered */
    for (i=0;i<n;i++)
    {
        cout<< x[i] << " " << y[i] << endl;
        Ex = Ex + x[i];
        Ey = Ey + y[i];
        Exy = Exy + x[i] * y[i];
        Ex2 = Ex2 + pow(x[i],2);

    }
    /**< perform calculations */
    meanx = Ex / n;
    meany = Ey / n;

    /**< Display results */
    cout<< "\nThe sum of x values is " << " : " << Ex;
    cout<< "\nThe sum of y values is " << " : " << Ey;
    cout<< "\nThe sum of the product xy is " << " : " << Exy;
    cout<< "\nThe value of x squared is " << " : " << Ex2;
    cout<< "\nThe mean value of x is " << " : " << meanx;
    cout<< "\nThe mean value of y is " << " : " << meany;

    /**< perform calculations */
    m = ((n*Exy)-(Ex*Ey))/((n*Ex2)-(pow(Ex,2)));

    c = meany - (m*meanx);

    /**< Display results */
    cout<< "\nThe slope of the line is: " << m ;
    cout<< "\nThe intercept of the line is: " << c << endl;

    return 0;
}
