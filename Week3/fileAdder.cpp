/***************************************************************************
 *
 * Author: Nick Roy
 * Date: 4/9/2016
 * Description: Program prompts user for a file with a list of integers.
 * File is read and each integer added to the totalSum variable. 
 * After each line is read. File is closed and the total of all the integers
 * is written to a file called sum.txt
 *
 ***************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ifstream inputFile;
  ofstream outputFile;
  int numberToAdd;
  int totalSum = 0;
  string filename;

  cout << "Enter the file with the integers. Make sure the correct path is "
       << "included if the file is not in the same directory: ";
  cin >> filename;

  //open the file
  inputFile.open(filename.c_str());

  if (inputFile) {

    while(inputFile >> numberToAdd) {
      //adds the line to the running total
      totalSum = totalSum + numberToAdd;
    }

    inputFile.close();// closes the file

  } else {
    cout << "Error opening the file. Writing 0 to sum.txt\n";
  }


  outputFile.open("./sum.txt");
  outputFile << totalSum << endl;
  outputFile.close();

  return 0;
}
