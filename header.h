#pragma once
/**
    CS 700 ASSIGNMENT 2 SECTION 1
    Name : DISHANT SHAH
    AUTHOR : DISHANT SHAH
    HEADER FILE
    DATE OF CREATION : 11/10/2022
    SUBMISSION DATE : 14/10/2022
**/

#include<iostream>      //includes the input/output streams for printing in the console
#include<iomanip>       //used to manipulate the output of program
#include<algorithm>     //enables us to use the sort function
#include<time.h>        //for saving the time required to compute clock_t function
using namespace std;

/**
    @brief It chooses the size of array from the given size in the assignment
    @param integer i
    @return Array size
    @author DISHANT SHAH
**/
int sizechoice(int i){

    int n1=100000, n2=1000000, n3=10000000,z;    //Variable declaration
    if (i == 0){                                 //Loop to assign value to the variable 'z'
        z = n1;
        }
    else if (i == 1){
        z = n2;
    }
    else {
        z = n3;
    }
    return z;
}


/**
    @brief The array is initialized using the rand() function
    @param variable1 the array & variable2  the integer size of array
    @return no return type
    @author DISHANT SHAH
**/
void arbitary(int arr[], int z){

    for (int i = 0; i < z; i++){
            arr[i] = (rand() % z) + 1;
    }
}


/**
    @brief It sorts the array and then return the time taken for sorting
    @param variable1 The array and variable2 the size of array
    @return Total time taken for sorting
**/
double time_and_sort(int Arr[], int t){

    clock_t strt,stp;
    strt = clock();
    sort(Arr, Arr + t);
    stp = clock();

    double total_time = double(stp - strt)/CLOCKS_PER_SEC;
    return total_time;
}



