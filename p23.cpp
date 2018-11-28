#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int l, n;
  vector<int> x(1000000);

  cin >> l >> n;
  for(int i = 0; i < n; i ++)
    cin >> x.at(i);

  int max_T = max(x.at(0), l-x.at(0)), min_T = min(x.at(0), l-x.at(0));
  for(int i = 1; i < n; i ++){
    if(max(x.at(i), l-x.at(i)) > max_T)
      max_T = max(x.at(i), l-x.at(i));
    if(min(x.at(i), l-x.at(i)) > min_T)
      min_T = min(x.at(i), l-x.at(i));
  }

  cout << min_T << endl;
  cout << max_T << endl;

  return 0;
}
