

void calculator_menu()
{
  /*Variable declarations : */
  int user_number_one = 0;
  int user_number_two = 0;
  char choice;

  std::cout << "to add numbers, select '+' \n";
  std::cout << "to subtract numbers select '-' \n";
  std::cout << " to multiply numbers select '*' \n";
  std::cout << "to divide numbers select '/' \n";
  std::cout << "to square/cube/etc, numbers, select '^' \n";
  std::cout << "to find the square root of a number, select 'r'\n";
  std::cout << "to quit press 'q'      \n";

  std::cin >> choice;
  switch(choice)
    {
    case '+':
      std::cout << "Please enter the numbers to be added: \n";
      std::cin >> user_number_one;
      std::cout << "+";
      std::cin >> user_number_two;
      std::cout << "\n";
      std::cout << "Your result is: " << add_numbers(user_number_one,user_number_two);
      std::cout << "\n";
      break;
    case '-':
      std::cout << "Please enter the numbers to be subtracted      \n";
      std::cin >> user_number_one;
      std::cout << "-";
      std::cin >> user_number_two;
      std::cout << "\n";
      std::cout << "Your result is: " << subtract_numbers(user_number_one,user_number_two);
      std::cout << "\n";
      break;
    case '*':
      std::cout << "Please enter the numbers to be multiplied: \n";
      std::cin >> user_number_one;
      std::cout << "*";
      std::cin >> user_number_two;
      std::cout << "\n";
      std::cout << "Your result is: " << multiply_numbers(user_number_one,user_number_two);
      std::cout << "\n";
      break;
    case '/':
      std::cout << "Please enter the numbers to be divided: \n";
      std::cin >> user_number_one;
      std::cout << "*";
      std::cin >> user_number_two;
      std::cout << "\n";
      std::cout << "Your result is: " << divide_numbers(user_number_one,user_number_two);
      std::cout << "\n";
      break;
    case '^':
      std::cout << "Please enter the number to be acted on: \n";
      std::cin >> user_number_one;
      std::cout << "^";
      std::cin >> user_number_two;
      std::cout << "\n";
      std::cout << "Your result is: " << square_numbers(user_number_one,user_number_two);
      std::cout << "\n";
      break;
    case 'r':
      std::cout << "Please enter the number to find the square root of: \n";
      std::cin >> user_number_one;
      std::cout << "\n";
      std::cout << "Your result is: " << square_root(user_number_one);
      std::cout << "\n";
      break;
      case 'q':
        break;
    default:
      std::cout << "please enter a valid response: \n";
      std::cin >> choice;

    }
}
