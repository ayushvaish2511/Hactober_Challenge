 #include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
   int j; double e; string t;// Declare second integer, double, and String variables.
    
cin>>j;
 cin>>e;
   getline(cin >> ws,t);  //TO GET THE STING WITH SPACES 
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
  cout<<i+j<<endl;  // Print the sum of both integer variables on a new line.
   
  cout<<fixed<<setprecision(1)<<e+d<< endl;
  
   // Print the sum of the double variables on a new line.
    
   cout<<s+t<<endl; // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
return 0;

}
