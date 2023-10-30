// Chris Ramon
// chrisramon1@csu.fullerton.edu
// @smoothchris1
// Partners: @Miguel16037

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() < 2 ) {
    std::cout << "error: you must supply at least one number\n ";
  return 1;
  }
  // Write a for-each loop to sum (add up) all of the command line
  // arguments.
  double sum {0.0};
  
  bool skip = true;
  for(const std::string &element: arguments){
    if(skip == true){
      skip = false;
      continue;
    } 
    sum += std::stod(element);  
  }
  // for (long i = 1; i < arguments.size(); i++) {
  //    double number = std::stod(arguments[i]);
  //    if (number != 0.0) {
  //     sum += number;
  //     total++;
  //    }
  // }
  double average = sum / (static_cast<int> (arguments.size() - 1));
  // After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  // Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "average" 
            << " = " << average << "\n";
  return 0;
}