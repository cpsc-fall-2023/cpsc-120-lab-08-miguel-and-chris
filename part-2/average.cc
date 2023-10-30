// Chris Ramon
// chrisramon1@csu.fullerton.edu
// @smoothchris1
// Partners: @Miguel16037

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // TODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() < 2 ) {
    std::cout << "you must supply at least one number\n ";
  return 1;
  }
  // TODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  //bool skip = true;
  //for(std::string i: arguments){
    //if (skip == true ) { 
    //  skip = false;
     // continue;
    //}
    //else {
      
    //}
  //}
double sum {0.0}
for (int i= 1; i < arguments.size[i]; i++){
   sum += num
}

  // Use a double or float type so that your program preserves fractional
  // values.
  double number = std::stod(arguments[1]);
  sum += number;

  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  bool skip = true;
  for (std::string i: arguments) {
     if (skip == true ) {
      skip = false;
      continue;
     }
     else {
      static_cast<double> 
     }
  }
  // TODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.

  // TODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.

  return 0;
}
