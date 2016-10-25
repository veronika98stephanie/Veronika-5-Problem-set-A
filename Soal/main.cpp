#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cmath>
#include <cctype>

#include "sodacan.hpp"

using namespace std;

int main()
{
     SodaCan can[100];
     string brand;
     int size;
     int contents;
     bool bChoice = true;
     int i = 0;

 do
 {
      cout << "Welcome to Miyabi's Vending Machine!" << endl;
      cout << "Please place your order! Your wish is my command!" << endl;
      cout << "Oh yeah... don't put any spaces in the brand name, ok!" << endl;
      getline(cin, brand);
      cout << "Gimme the brand's size and contents" << endl;
      cin >> size >> contents;

      SodaCan can[100];
      can[i].setBrand(brand);
      can[i].setSize(size);
      can[i].pourSoda(contents);

      cout << can[i].getContents() << " units" << endl;

      cout << "Here you go: " << endl;
      cout << can[i].getContents() << " ounces of " << can[i].getBrand() << endl;
      if (size < contents)
      {
       cout << "I notice that the container is too small, causing it to leak!" << endl;
       cout << "You are still going to pay for the excess" << endl;
      }

      cout << "Do you want to have another drink?" << endl;
      cout << "Enter 1 for yes and enter 0 for no." << endl;
      cin >> bChoice;
      cin.ignore();
      i++;
     } while (bChoice == true);
     return 0;
}
