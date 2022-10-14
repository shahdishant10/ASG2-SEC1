/**
    CS 700 ASSIGNMENT 2 SECTION 1
    Name : DISHANT SHAH
    AUTHOR : DISHANT SHAH
    MAIN FILE
    DATE OF CREATION : 11/10/2022
    SUBMISSION DATE : 14/10/2022
**/

#include "header.h"
int main()
{
    int i=0;
    for(i=0;i<3;i++)         //Loop for getting the size of array.
    {
        int DIMEN = sizechoice(i);      //Calling the function to get the size of array everytime.
        cout << "The size of all the ten array is " << DIMEN <<endl;  //Prints the size of the array on the console.
        cout <<"           RandomTime     OrderedTime     InverseTime "<< endl;   //Prints the mentioned time on the console.

        for(int j=0;j<10;j++)     //Used to get different size of array.
        {
            int * A1 = new int [DIMEN];      //New dynamic array allocation.
            arbitary(A1,DIMEN);              //Calling the "arbitary" function.
            double TIME1 = time_and_sort(A1,DIMEN);  //Declaring a variable to store the result of function "time_and_sort" which is called.
            double TIME2 = time_and_sort(A1,DIMEN);  //Declaring a variable to store the result of function "time_and_sort" which is called.
            sort(A1, A1+DIMEN, greater<int>());    //Sorting the array in inverse order.
            double TIME3 = time_and_sort(A1,DIMEN);  //Declaring a variable to store the result of function "time_and_sort" which is called.

            cout << "Array["<<j<<"]  "<<    //Prints the array number on the console.
             TIME1 << fixed << setprecision(3) << " Seconds  "   //Prints the time taken to sort the array.
             << TIME2 << fixed << setprecision(3) << " Seconds   "  //Prints the time taken to sort the array.
            << TIME3 << fixed << setprecision(3) << " Seconds  " << endl;  //Prints the time taken to sort the array.
            delete A1;   //Delete the array.
        }
        cout << endl;
    }
        return 0;
}

