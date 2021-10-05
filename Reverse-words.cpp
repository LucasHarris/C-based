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
/*[d---]*/  int x; // ------------------------------------------------------------ < Number of strings to be reversed >
/*[o---]*/  std::cout<<"<?> Choose a number of words:"<<std::endl<<"<#> "; //----- < Prompt the user with the question >
/*[i---]*/  std::cin>>x; // ------------------------------------------------------ < The number request >
/*[d---]*/  std::string y; // ---------------------------------------------------- < The string to be entered >
/*[a---]*/  for(int i=0;i<x;i++){
/*[ao--]*/    std::cout<<std::endl<<"<"<<i<<"> ";
/*[ai--]*/    std::cin>>y;
/*[ad--]*/    std::string z;
/*[aa--]*/    for(int j=y.length()-1;j>=0;j-=1){
/*[ac--]*/       z+=y.at(j);
/*[aa##]*/    }
/*[ao--]*/    std::cout<<std::endl<<"<r> "<<z;
/*[a###]*/   }
  return 0; // End Program
}
