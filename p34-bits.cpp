#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void){
  int n, k;
  vector<int> a;

  cin >> n >> k;
  for(int i = 0; i < n; i ++){
    int temp;
    cin >> temp;
    a.push_back(temp);
  }

  int bits = pow(2, n)-1;
  cout << bits << endl;

  // bit全探索
  for(int i = 1; i <= bits; i ++){
    int sum = 0;
    // 各bitを調べる
    for(int j = 1; j < bits; j *= 2){
      if((j & i) == j) sum += a.at(log2(j));
    }
    if(sum == k){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}
