#ifndef ___RECURSIVE_POTPOURRI
#define ___RECURSIVE_POTPOURRI

typedef struct CalculationResultsImplementation* CalculationResults;

int calc_array_size(int n);
int convert_to_binary(int decimal_number);
void calc_sums(int *input_arr, int input_arr_length, int *output_arr_sums, int *output_arr_bin_sums);
int calc_factorial(int number);
int * create_array(int required_size);
struct CalculationResults perform_calculations(int number_arr[], int num_arr_size);

#endif
