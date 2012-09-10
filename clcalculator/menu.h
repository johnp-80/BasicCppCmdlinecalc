

void calculator_menu()
{
    /*Variable declarations : */
    int user_number_one = 0;
    int user_number_two = 0;
    char choice;
    char redo;//Do we want to continue?
    double total_time = 0;
    double total_distance  = 0;
    double vehicle_1_speed = 0;
    double vehicle_2_speed = 0;
    std::string vehicle_2_name = " ";
    std::string vehicle_1_name = " ";
    double v1_distance,v1_time,v2_distance,v2_time = 0;

    std::cout << "to add numbers, select '+' \n";
    std::cout << "to subtract numbers select '-' \n";
    std::cout << " to multiply numbers select '*' \n";
    std::cout << "to divide numbers select '/' \n";
    std::cout << "to square/cube/etc, numbers, select '^' \n";
    std::cout << "to find the square root of a number, select 'r'\n";
    std::cout << "To use the khan academy calc press k\n";
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
    case 'k':

        std::cout << " Please enter the name of the first vehicle:  \n" ;
        std::cin >> vehicle_1_name ;
        std::cout << " Please enter the name of the second vehicle:  \n" ;
        std::cin >> vehicle_2_name ;
        std::cout << " Thanks, now for some number crunching. \n" ;
        std::cout << " Please enter the speed for " << vehicle_1_name <<"(vehicle 1 \n: ";
        std::cin >> vehicle_1_speed ;
        std::cout << " Thanks! Now for the "<< vehicle_2_name <<"(vehicle 2) \n:" ;
        std::cout << " Thanks! Vehicle 2's speed is  \n :" ;
        std::cin >> vehicle_2_speed ;
        std::cout << " Thanks! Please enter the total distance traveled \n" ;
        std::cin >> total_distance ;
        std::cout << " Thanks! Please enter the total time travelled and we will find the answers! \n" ;
        std::cin >> total_time ;
        double rate_calc(double vehicle_1_speed,double vehicle_2_speed,const std::string &vehicle_1_name,const std::string &vehicle_2_name,double total_distance,double total_time) ;
        std::cout << " Distance traveled by : " <<vehicle_1_name << " " << v1_distance <<"  \n";
        std::cout << " Time it took to travel distance(in minutes): " << v1_time << " \n";
        std::cout << " Distance traveled by : " <<vehicle_2_name << " " << v2_distance <<"  \n";
        std::cout << " Time it took to travel distance(in minutes): " << v2_time << " \n";

        std::cout << "  \n" ;
        std::cout << "  \n" ;
        std::cout << " Do you wish to continue?  \n" ;
        std::cin >> redo ;
        redo = tolower(redo);
        while ( redo != 'n'){
            std::cout << " Please enter the name of the first vehicle:  \n" ;
        std::cin >> vehicle_1_name ;
        std::cout << " Please enter the name of the second vehicle:  \n" ;
        std::cin >> vehicle_2_name ;
        std::cout << " Thanks, now for some number crunching. \n" ;
        std::cout << " Please enter the speed for " << vehicle_1_name <<"(vehicle 1 \n: ";
        std::cin >> vehicle_1_speed ;
        std::cout << " Thanks! Now for the "<< vehicle_2_name <<"(vehicle 2) \n:" ;
        std::cout << " Thanks! Vehicle 2's speed is  \n :" ;
        std::cin >> vehicle_2_speed ;
        std::cout << " Thanks! Please enter the total distance traveled \n" ;
        std::cin >> total_distance ;
        std::cout << " Thanks! Please enter the total time travelled and we will find the answers! \n" ;
        std::cin >> total_time ;
        double rate_calc(double vehicle_1_speed,double vehicle_2_speed,const std::string &vehicle_1_name,const std::string &vehicle_2_name,double total_distance,double total_time) ;


        std::cout << "  \n" ;
        std::cout << "  \n" ;
        std::cout << " Do you wish to continue?  \n" ;
        std::cin >> redo ;
        redo =  tolower(redo);



        }

        break;
    default:
        std::cout << "please enter a valid response: \n";
        std::cin >> choice;

    }
}
