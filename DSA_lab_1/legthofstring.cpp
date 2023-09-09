#include<iostream>
using namespace std;
//Programme to calculate length of string

int main() {

   // Declare Variables
   char str[20], *pt;
   int i = 0;

   cout << " Calculate Length of String \n";

   cout << "Enter Any string [below 20 chars without spacing] : ";
   cin>>str;

   pt = str;
   while (*pt != '\0') {
      i++;
      pt++;
   }
   cout << "\nLength of String : " << i;

   getchar();
   return 0;
}