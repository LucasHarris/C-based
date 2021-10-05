/* { Date - Tuesday - October 5th, 2021 }
Task:
  - Take user input for an integer
  - For the number given, request string type input
  - For every string, print out its reverse
  - End the program
*/

#include <iostream>
//#include <cstring> I forgot that I do not need this library
#include <stdio.h> 
// Rule #1 of C++: Never declare namespace.

int main() {
/*[d---]*/  int x; // ------------------------------------------------------------ < Declaring the number for strings to be reversed  >
/*[o---]*/  std::cout<<"<?> Choose a number of words:"<<std::endl<<"<#> "; //----- < Prompt the user with the question                >
/*[i---]*/  std::cin>>x; // ------------------------------------------------------ < The number request                               >
/*[d---]*/  std::string y; // ---------------------------------------------------- < Declaring the strings for what is entered        >
/*[a---]*/  for(int i=0;i<x;i++){ // --------------------------------------------- < Looping for every string                         > 
/*[ao--]*/    std::cout<<std::endl<<"<"<<i+1<<"> "; // --------------------------- < Printing out string number                       >
/*[ai--]*/    std::cin>>y; // ---------------------------------------------------- < The String request                               >
/*[ad--]*/    std::string z; // -------------------------------------------------- < Declaring the string for reversed strings        >
/*[aa--]*/    for(int j=y.length()-1;j>=0;j-=1){ // ------------------------------ < Looping starting from the last char of string    >
/*[ac--]*/       z+=y.at(j); // -------------------------------------------------- < Adding the letters to z starting from end of y   >
/*[aa##]*/    }
/*[ao--]*/    std::cout<<"<r> "<<z; // ------------------------------------------- < Printing the resulting reversed string           >
/*[a###]*/   }
  return 0; // End Program
}
