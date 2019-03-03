#ifndef ___RECURSIVE_POTPOURRI
#define ___RECURSIVE_POTPOURRI


struct CalculationResults{
  int no_of_sums;
  int no_of_nums;
  int* sums;
  int* binary_sums;
  int* num_factorials;
};

int calc_array_size(int n);
int convert_to_binary(int decimal_number);
void calc_sums(int *input_arr, int input_arr_length, int *output_arr_sums, int *output_arr_bin_sums);
int calc_factorial(int number);
int* create_array(int required_size);
int calc(int* input_arr, int input_arr_length, int* output_arr_sums, int* output_arr_bin_sums, int i, int index, int sum);
struct CalculationResults perform_calculations(int number_arr[], int num_arr_size);

#endif
