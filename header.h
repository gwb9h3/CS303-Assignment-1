#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int present(int number, int array[], int size); // This is the function that looks through the array to see if a number is present inside 
pair<int,int> replace(int position,int NewNum, int array[],int currentPos); // This function takes in an array and a postion and replaces the number at that position with a new number, after it returns a pair where the first int is the new number and the second int is the old number.
void addNum(int number, int position, int array[]); // This function adds a number to the end of the array
void removeNum(int position, int array[]); // This function will replace a number at a given position in the array with 0