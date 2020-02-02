// Lab 3 table.cpp
// This program reads data from a file and 
// prints it in a nicely aligned table.
// Ryan Dunnion

#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
       string code,            // Item code of an inventory item
                  description;     // Description of an inventory item
       int quantity;           // Quantity in stock of an inventory item
       int width = 10;
       int width2 = 16;
       int width3 = 15;
       int width4 = 8;
       
       ifstream dataIn;        // Define an input file stream object
       dataIn.open("Tables.dat");   //opens a file stream

           // Print table heading
       cout << "     Warehouse Inventory      \n";
       cout << "==============================\n\n";
       cout << "Item" << setw(width) << "Item" << setw(width3) << "Item\n";     //setw sets the field width
       cout << "Code" << setw(width2) << "Description" << setw(width4) << "Qty\n";
    
           // Read in five data records and display them
       //commenting out unneccesary code
       //dataIn >> code >> description >> quantity;        // Record 1
       //cout << code << "\t  " << description << "\t   " << quantity << "\n";

      while (dataIn >> code >> description >> quantity)     //loop to parse the data in file line by line
       {
          cout << left                                      //prints the formatted data
              << setw(width) << code << setw(width)
              << setw(width) << description << "\t   "
              << setw(width) << quantity << "\n";
       }

       dataIn.close();      //closes the file stream

       return 0;
}

