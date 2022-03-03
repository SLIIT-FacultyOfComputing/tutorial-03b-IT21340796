#include <iostream>
#include<iomanip>
using namespace std;

int main() {
  
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << "No" <<setw(12)<< "Name" <<setw(12) <<"Marks" << endl;
  
 for (int r = 0; r < 5; r++) {
     cout <<  r+1 <<
          setw(13)<<  names[r]<<setw(12)<<
          setiosflags(ios::fixed)<< setprecision(2)<<marks[r] << endl;
       }//end for loop
  
  }//end main function
