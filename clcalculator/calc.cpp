/*
 * Author: johnp80
 * a simple command line calculator implementation
 * 2/10/2012
 * Made for http://www.reddit.com/r/dailyprogrammer/comments/pjbj8/easy_challenge_2/
 * */

#include <iostream>
#include <cmath>

using namespace std;
int add_numbers(int numb_one,int numb_two)
{
  return numb_one + numb_two;
}
int subtract_numbers(int numb_one,int numb_two)
{
  return numb_one - numb_two;
}
int multiply_numbers(int numb_one,int numb_two)
{
  return numb_one * numb_two;
}
int divide_numbers(int numb_one,int numb_two)
{
  int div_result = numb_one / numb_two;
  int mod_result = numb_one % numb_two;
  return div_result && mod_result;
}
int square_numbers(int numb_one,int numb_two)
{
  int result = pow(numb_one,numb_two);
  return result;
}
int square_root(int numb_one)
{
  int result = sqrt(numb_one);
  return result;
}
void calculator_menu()
{
  /*Variable declarations : */
  int user_number_one = 0;
  int user_number_two = 0;
  char choice;

  cout << "to add numbers, select '+' \n";
  cout << "to subtract numbers select '-' \n";
  cout << " to multiply numbers select '*' \n";
  cout << "to divide numbers select '/' \n";
  cout << "to square/cube/etc, numbers, select '^' \n";
  cout << "to find the square root of a number, select 'r'\n";
  cout << "to quit press 'q'      \n";

  cin >> choice;
  switch(choice)
    {
    case '+':
      cout << "Please enter the numbers to be added: \n";
      cin >> user_number_one;
      cout << "+";
      cin >> user_number_two;
      cout << "\n";
      cout << "Your result is: " << add_numbers(user_number_one,user_number_two);
      cout << "\n";
      break;
    case '-':
      cout << "Please enter the numbers to be subtracted      \n";
      cin >> user_number_one;
      cout << "-";
      cin >> user_number_two;
      cout << "\n";
      cout << "Your result is: " << subtract_numbers(user_number_one,user_number_two);
      cout << "\n";
      break;
    case '*':
      cout << "Please enter the numbers to be multiplied: \n";
      cin >> user_number_one;
      cout << "*";
      cin >> user_number_two;
      cout << "\n";
      cout << "Your result is: " << multiply_numbers(user_number_one,user_number_two);
      cout << "\n";
      break;
    case '/':
      cout << "Please enter the numbers to be divided: \n";
      cin >> user_number_one;
      cout << "*";
      cin >> user_number_two;
      cout << "\n";
      cout << "Your result is: " << divide_numbers(user_number_one,user_number_two);
      cout << "\n";
      break;
    case '^':
      cout << "Please enter the number to be acted on: \n";
      cin >> user_number_one;
      cout << "^";
      cin >> user_number_two;
      cout << "\n";
      cout << "Your result is: " << square_numbers(user_number_one,user_number_two);
      cout << "\n";
      break;
    case 'r':
      cout << "Please enter the number to find the square root of: \n";
      cin >> user_number_one;
      cout << "\n";
      cout << "Your result is: " << square_root(user_number_one);
      cout << "\n";
      break;
      case 'q':
        break;
    default:
      cout << "please enter a valid response: \n";
      cin >> choice;

    }
}
int main()
{
  char calc_continue = 'n';
  calculator_menu();
  while(calc_continue == 'n')
    {
      calculator_menu();
      cout << "Are you sure you want to quit? \n Plese enter y/n : ";
      cin >> calc_continue;
    }

  return 0;
}
