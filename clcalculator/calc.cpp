/*
 * Author: johnp80
 * Description: a simple command line calculator implementation
 * created: 2/10/2012
 * updated: 9/9/2012
 * Made for http://www.reddit.com/r/dailyprogrammer/comments/pjbj8/easy_challenge_2/
 * */

#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include "basic_calc.h"
#include "menu.h"
#include "ratecalc.h"



int main()
{
  char calc_continue = 'n';
  calculator_menu();
  while(calc_continue == 'n')
    {
      calculator_menu();
      std::cout << "Are you sure you want to quit? \n Plese enter y/n : ";
      std::cin >> calc_continue;
    }

  return 0;
}
