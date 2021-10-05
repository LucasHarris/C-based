/* { Date - Tuesday - October 5th, 2021 }
Task:
  - Take user input for an integer
  - For the number given, request string type input
  - For every string, print out its reverse
  - End the program
*/

#include <iostream>
//#include <cstring> I forgot that I don't need this library
#include <stdio.h> 
// Never declare namespace.

int main() {
  int x; // ------------------------------------------------------------------- < Number of strings to be reversed >
/*[i---]*/  std::cout<<"<?> Choose a number of words:"<<std::endl<<"<#> "; //-- < Prompt the user with the question >
/*[i---]*/  std::cin>>x; // --------------------------------------------------- < The number request >
  std::string y; // ----------------------------------------------------------- < The string to be entered >
/*[a---]*/  for(int i=0;i<x;i++){
/*[ai--]*/    std::cout<<std::endl<<"<"<<i<<"> ";
/*[ai--]*/    std::cin>>y;
              std::string z;
              for(int j=y.length()-1;j>=0;j-=1){
                z+=y.at(j);
              }
              //std::cout<<z;
         }
}
