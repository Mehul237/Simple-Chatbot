#include <iostream>
#include <regex>
using namespace std;

bool isValid(string s) {

   // The given argument to pattern() is a regular expression. With the help of a regular expression, we can validate a mobile number.
   // 1) Begins with 0 or 91
   // 2) Then contains 6, 7, 8, or 9.
   // 3) Then contains 9 digits

   const regex pattern("(0|91)?[6-9][0-9]{9}");

   // regex_match() is used to find a match between the given number and the regular expression
   if(regex_match(s, pattern)) {
      return true;
   } else {
      return false;
   }
}

int main() {

   string s = "919266677777";

   if(isValid(s)) {
      cout << "Valid";
   } else {
      cout << "Invalid";
   }

   return 0;
}
