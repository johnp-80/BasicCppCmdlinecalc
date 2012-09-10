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
