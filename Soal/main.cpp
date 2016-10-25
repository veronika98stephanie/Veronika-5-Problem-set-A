#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cmath>
#include <cctype>
#include <conio.h>
#include <stdio.h>

#include "sodacan.hpp"

using namespace std;

int main()
{
    SodaCan can[100];
    string brand;
    int size1;
    int contents;
    bool bChoice = true;
    bool skip = false;
    int i = 0;
    while (bChoice == true)
    {
        system("cls");
        cout << "Welcome to Miyabi's Vending Machine!" << endl;
        cout << "Please place your order! Your wish is my command!" << endl;
        cout << "Oh yeah... don't put any spaces in the brand name, ok!" << endl;
        //getline(cin, brand);
        cout << "Gimme the brand's size and contents" << endl;
        cin >> brand >> size1 >> contents;
        fflush(stdin);

        for(int j=0;j<=i;j++){
            if(can[j].isEmpty() == 0)break;
            if(can[j]==SodaCan(brand,size1,contents)){
                can[j] + SodaCan(brand,size1,contents);
                i--;
            }
            else i--;
        }

        can[i].setBrand(brand);
        can[i].setSize(size1);
        can[i].pourSoda(contents);
        cout << can[i].getContents() << " units" << endl;
        //SodaCan can[100];


        cout << endl << "Here you go: " << endl;

        for (int j = 0; j <= i ; j++)
        {
            cout << can[j].getContents() << " ounces of " << can[j].getBrand() << endl;
        }
        cout << endl;

        if (size1 < contents)
        {
            cout << "I notice that the container is too small, causing it to leak!" << endl;
            cout << "You are still going to pay for the excess" << endl;
        }
        cout << "Do you want to have another drink?" << endl;
        cout << "Enter 1 for yes and enter 0 for no." << endl;
        cin >> bChoice;
        cin.ignore();
        i++;
    };
    return 0;
}
