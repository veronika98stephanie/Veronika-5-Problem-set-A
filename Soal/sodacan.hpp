#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cmath>
#include <cctype>

using namespace std;

class SodaCan
{
private:
     string my_Brand;
     int my_Size;
     int my_Content;
public:
 SodaCan(string brand, int content, int size)
 {
      this->my_Brand = brand;
      this->my_Content = content;
      this->my_Size = size;
 }
 SodaCan()
 {
      this->my_Brand = "";
      this->my_Content = 0;
      this->my_Size = 0;
 }
 bool isEmpty()
 {
      bool bCheck;

      if (my_Content <= 0)
      {
       cout << "The container is empty!" << endl;
       bCheck = true;
      }
      else
      {
       cout << "There is still some soda left in the container!" << endl;
       bCheck = false;
      }

      return bCheck;
 }

 void pourSoda(int& amount)
 {
      this->my_Content += amount;
      return;
 }
 void drink(int& amount)
 {
      this->my_Content -= amount;
      return;
 }
 void setSize(int size)
 {
      this->my_Size = size;
      return;
 }
 int getSize()
 {
    return my_Size;
 }
 string getBrand()
 {
    return my_Brand;
 }
 void setBrand(string brand)
 {
      this->my_Brand = brand;
      return;
 }
 int getContents()
 {
    return my_Content;
 }

 SodaCan operator+(const SodaCan& can)
 {
      SodaCan totalSodaScan;

      if(this->my_Brand.compare(can.my_Brand) == 0)
      {
           totalSodaScan.my_Brand = this->my_Brand;
           totalSodaScan.my_Size = this->my_Size;
           totalSodaScan.my_Content = this->my_Content + can.my_Content;
      }
 }

 SodaCan operator-(const SodaCan& can)
 {
      SodaCan totalSodaScan;

      if(this->my_Brand.compare(can.my_Brand) == 0)
      {
           totalSodaScan.my_Brand = this->my_Brand;
           totalSodaScan.my_Size = this->my_Size;
           totalSodaScan.my_Content = this->my_Content - can.my_Content;
      }
 }

 bool operator<(const SodaCan& can)
 {
      SodaCan TotalSodaScan;
      bool nCheck;

      if (this->my_Content < can.my_Content && this->my_Size < can.my_Size)
      {
       nCheck = true;
      }
      else
      {
       nCheck = false;
      }

      return nCheck;
 }

 bool operator>(const SodaCan& can)
 {
      SodaCan TotalSodaScan;
      bool nCheck;

      if (this->my_Content > can.my_Content && this->my_Size > can.my_Size)
      {
        nCheck = true;
      }
      else
      {
        nCheck = false;
      }

  return nCheck;
 }

 bool operator>=(const SodaCan& can)
 {
      SodaCan TotalSodaScan;
      bool nCheck;

      if (this->my_Content >= can.my_Content && this->my_Size >= can.my_Size)
      {
        nCheck = true;
      }
      else
      {
        nCheck = false;
      }

  return nCheck;
 }

 bool operator<=(const SodaCan& can)
 {
      SodaCan TotalSodaScan;
      bool nCheck;

      if (this->my_Content <= can.my_Content && this->my_Size <= can.my_Size)
      {
        nCheck = true;
      }
      else
      {
        nCheck = false;
      }

      return nCheck;
 }

 bool operator!=(const SodaCan& can)
 {
      SodaCan TotalSodaScan;
      bool nCheck;

      if (this->my_Content != can.my_Content && this->my_Size != can.my_Size && this->my_Brand.compare(can.my_Brand) != 0)
      {
        nCheck = true;
      }
      else
      {
        nCheck = false;
      }

      return nCheck;
 }

 bool operator==(const SodaCan& can)
 {
      SodaCan TotalSodaScan;
      bool nCheck;

      if (this->my_Content == can.my_Content && this->my_Size == can.my_Size && this->my_Brand.compare(can.my_Brand) == 0)
      {
        nCheck = true;
      }
      else
      {
        nCheck = false;
      }

        return nCheck;
 }

};
