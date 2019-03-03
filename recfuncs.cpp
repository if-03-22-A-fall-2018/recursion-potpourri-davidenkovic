#include "recfuncs.h"

int calc_array_size(int n){
  if (n == 0) {
    return 1;
  }
  return 2 * calc_array_size(n-1);
}
int convert_to_binary(int decimal_number){
  if (decimal_number == 0) {
    return 0;
  }
  return decimal_number % 2 + 10 * convert_to_binary(decimal_number/2);
}
void calc_sums(int* input_arr, int input_arr_length, int* output_arr_sums, int* output_arr_bin_sums){
  calc(input_arr, input_arr_length-1, output_arr_sums,output_arr_bin_sums,0,0,0);
}
int calc_factorial(int number){
  if(number==0)
  {
    return 1;
  }
  return number * calc_factorial(number-1);

}
int* create_array(int required_size){
  int* array = new int[required_size];

  for (int i = 0; i < required_size; i++) {
    array[i]=-1;
  }

  return array;

}

int calc(int* input_arr, int input_arr_length, int* output_arr_sums, int* output_arr_bin_sums, int i, int index, int sum)
{
  if(i>input_arr_length)
  {
    output_arr_sums[index]=sum;
    output_arr_bin_sums[index]=convert_to_binary(sum);
    return ++index;
  }

  int index1 = calc(input_arr,input_arr_length,output_arr_sums,output_arr_bin_sums,i+1,index,sum+input_arr[i]);
  calc(input_arr,input_arr_length,output_arr_sums,output_arr_bin_sums,i+1,index1,sum);
}

struct CalculationResults perform_calculations(int number_arr[], int num_arr_size){
  struct CalculationResults temp;
  return temp;
}
