#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

      return (pow((left - right), 2));

  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    // Write your code here ...
      if ((mask < 0) || (bit_pos < 0))
          return false;
      
      int bit_mask = 0;
      
      for (int i = 0; (mask > 0); i++)
      
      {
          bit_mask += (mask % 2) * pow(10, i);
          mask /= 2;
      }

      int n = pow(10, bit_pos);
      if ((bit_mask % n) == 1)
          return true;
      else
          return false;
  }

  // Task 3
  int max3(int left, int middle, int right) {

    // Write your code here ...

    return 0;
  }

  // Task 4
  void swap_args(int *left, int *right) {

    // Write your code here ...
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    // Write your code here ...

    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    // Write your code here ...

    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
