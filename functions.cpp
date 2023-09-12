#include "header.h"

int present(int number, int array[], int size){
  for(int i= 0; i < size; i++){ // This for loop iterates through the array checking each element to see if it matches the number, if it finds a match it returns the position and prints where it was found. If it checks each element and does not find a match it returns -1 and prints that a match was not found.
    if (number == array[i]){
      cout << number << " can be found at position " << i << endl;
      return i;
    }
  }
  cout << number << " was not found in the array" << endl;
  return -1;
}


pair<int,int> replace(int position,int NewNum, int array[],int currentPos){//This function returns a pair of the new number and the old number in the array.
  try{
    pair<int,int> replacements;
    
    if(position >= currentPos){ //If statement to throw an error if the numbers input are invalid
      string error = "Position not found in array";
      throw error;
    }
    replacements.second = array[position];
    array[position] = NewNum;
    replacements.first = array[position];
    cout << "The number " <<  replacements.second <<" at " << position << " has been replaced by " << replacements.first << endl;
    return replacements;
  }
  catch(string a){ // This catch block checks to see if the number input by the user is within the numbers filled in the array if it is not then it returns an empty pair.
    cout << endl;
    cout << endl;
    cout << a << endl;
    cout << "Returning empty pair" << endl;
    pair<int,int> error;
    return error;
  }
}


void addNum(int number, int position, int array[]){
  try{
    if(position >= 100){ // This checks to see if the array has been filled, if it has it will throw an error and exit the function
      string error = "Error max limit of array has been reached";
      throw error;
    }
    array[position] = number;
  }
  catch(string a){
    cout << endl;
    cout << endl;
    cout << a << endl;
  }
}

void removeNum(int position, int array[]){
  array[position] = 0;
}
