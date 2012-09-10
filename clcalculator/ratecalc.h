#ifndef RATECALC_H_INCLUDED
#define RATECALC_H_INCLUDED
/*
 * Author: @johnp80
 * Program: Khan Academy rate problem solver
 * Version: 1.0
 * Date created: 9/09/2010
 * Date updated:
 * Updates: Completely rewrote old ratecalc2 program and included it in a general calculator program.
 *
 */

double rate_calc(double vehicle_1_speed,double vehicle_2_speed,const std::string &vehicle_1_name,const std::string &vehicle_2_name,double total_distance,double total_time )
{
    int minutes = 60;
    int uno = -1;//Can not remember why 1 works, but it does.
    double rate_v1 = 0;
    double rate_v2 = 0;
    double v1_time = 0;
    double v1_distance = 0;
    double v2_time = 0;
    double v2_distance = 0;

    std::cout << " Khan Academy Calculator v1.0 \n author:johnp80 \n updated September 2012" ;



    //Now to find the distance traveled by each vehicle and the time it took to travel that distance.

    v1_distance = rate_v2 - rate_v1;
    v1_time = total_time * rate_v1 * uno;
    v1_time += total_distance;
    v1_distance = v1_time*(vehicle_1_speed/v1_distance);
    v1_time = v1_distance/vehicle_1_speed;
    v1_time *= minutes;

    v2_distance = rate_v2 - rate_v1;
    v2_time = total_time * rate_v1 * uno;
    v2_time += total_distance;
    v2_distance = v1_time*(vehicle_2_speed/v2_distance);
    v1_time = v2_distance/vehicle_2_speed;
    v2_time *= minutes;

    std::cout << " Distance traveled by : " <<vehicle_1_name << " " << v1_distance <<"  \n";
    std::cout << " Time it took to travel distance(in minutes): " << v1_time << " \n";
    std::cout << " Distance traveled by : " <<vehicle_2_name << " " << v2_distance <<"  \n";
    std::cout << " Time it took to travel distance(in minutes): " << v2_time << " \n";



    return 0;


}


#endif // RATECALC_H_INCLUDED
