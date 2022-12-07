
#include <iostream>
#include<vector>
int main() {
  using namespace std;
  int no = 2;
  vector <int> arr = {1};
  int pos = 1;
  while (no < 4000000){
    arr.push_back(no);
    no = arr[pos] + arr[pos-1];
    pos += 1;
  }
  int val = 0;
  for (auto element : arr) {
    if (element % 2 == 0)
      val += element;
    cout <<val <<endl;
  }
  //cout << arr[0][3] <<endl;
  return 0;
}
