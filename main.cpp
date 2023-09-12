#include "header.h"
using namespace std;

int main() {
  ifstream inFile;
  string FileName;
  int numbers[100] = {}; // The array has a max limit of 100 numbers 
  
  cout << "Please enter the name of the file you would like to input into the array :";
  cin >> FileName;
  inFile.open(FileName);
  //This checks to see if the file input is valid and opens correctly
  if (!inFile.is_open()) {
    cout << "Input file invalid\n";
    abort();
  }
  // This section takes in each line one by one and inputs them into the array
  int InNum, currentPos = 0;
  while (inFile >> InNum){
    numbers[currentPos] = InNum;
    currentPos++;
  }

  while(true){ // This creates a loop prompting the user to choose from multiple functions until they chose the option to quit
    try{
      string choice;
      cout << endl;
      cout << endl;
      cout << "Please enter which of the following functions you would like to do:" << endl;
      cout << "1 - Check if an integer is located in the array" << endl;
      cout << "2 - Replace an integer located within the array" << endl;
      cout << "3 - Add a new integer to the end of the array" << endl;
      cout << "4 - Replace an integer with 0 in the array" << endl;
      cout << "5 - Quit" << endl;
      cin >> choice;
      cout << endl;
      cout << endl;
    
      
     if (choice == "1"){
        int search;
        string input;
        cout << "Please enter the number you would like to search for in the array: ";
        cin >> input;
        search = stoi(input);
        present(search,numbers,currentPos);
      }
    
      
      else if (choice == "2"){
        int location,replacement;
        string input;
        cout << "Please enter the location in the array you would like to modify: ";
        cin >> input;
        location = stoi(input);
        cout << "Please enter the number you would like to replace the previous with: ";
        cin >> input;
        replacement = stoi(input);
        replace(location, replacement, numbers, currentPos);
      }
    
      
      else if (choice == "3"){
        int number;
        string input;
        cout << "Please enter the number you would like to add to the end of the array: ";
        cin >> input;
        number = stoi(input);
        addNum(number, currentPos, numbers);
        currentPos++;
      }
    
      else if (choice == "4"){
        int location;
        string input;
        cout << "Please enter the location in the array you would like to replace with 0: ";
        cin >> input;
        location = stoi(input);
        removeNum(location, numbers);
      }
    
    
      else if (choice == "5"){
        abort();
      }
    
    
      else{ // This statement will catch invalid input for the function choice
        cout << endl;
        cout << endl;
        cout << "Please enter a valid choice" << endl;
        continue;
      }
    }
    catch(std::invalid_argument){ // This catch statement will catch strings being input when integers should be input by the user
      cout << endl;
      cout << endl;
      cout << "Error string input instead of integer please try again." << endl;
      continue;
    }
  }
}
