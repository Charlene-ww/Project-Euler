#include <iostream>
#include <vector>

int main() {
  using namespace std;
  long num = 600851475143;
  vector <int> arr ={};
  int i = 2;
  int j = 2;
  while (i<= num) {
    if (num%i == 0){
      int isprime = 1;
      while (j <= (i/2 +1));
        if (i%j == 0) {
          isprime = 0;
        j++;
        break;
        }
      if (isprime==1)
        arr.push_back(i);
      i++;
    }
  }
  for (auto element : arr) {
    cout <<element <<endl;
  return 0;
  }
}