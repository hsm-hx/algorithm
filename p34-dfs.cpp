#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n, k;
vector<int> a;

bool dfs(int i, int sum){
  if(i == n)
    return sum == k;

  if(dfs(i + 1, sum)) return true;
  if(dfs(i + 1, sum + a.at(i))) return true;
  
  return false;
}

int main(void){
  cin >> n >> k;
  for(int i = 0; i < n; i ++){
    int temp;
    cin >> temp;
    a.push_back(temp);
  }

  if(dfs(0, 0)) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
