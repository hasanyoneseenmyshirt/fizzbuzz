#include <iostream>
using namespace std;

int main(){

  int number;

  for(number = 1; number < 101; number++){
    if(number % 3 == 0 && number % 5 != 0){
      cout << "Fizz\n";
    }
    else if(number % 3 != 0  && number % 5 == 0){
      cout << "Buzz\n";
    }
    else if (number % 3 == 0 && number % 5 == 0){
      cout  << "FizzBuzz\n";
    }
    else{
      cout << number << endl;
    }
  }
  return 0;

}
