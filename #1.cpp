#include <iostream>
//Problem 1: Multiples of 3 or 5
int main() {
  using namespace std;
  int i = 0;
  int num = 1;
  while (num < 1000) {
    if (num % 3 == 0)
      i += num;
    else if (num % 5 == 0) 
      i += num;
    num += 1;
  }
  cout << i;
  return 0;

  int no = 2
  arr = [1]
  pos = 1
  while (no < 4000000){
    arr += [no];
    no = arr[pos] + arr[pos-1]
    pos += 1
    
  }
}