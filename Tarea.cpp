#include <iostream>
#include <string>
#include <vector>

int main(int argc, char const *argv[]) {
  std::vector<int> v;
  unsigned int a;
  int x;
  for(a = 0; a < 10; a++){
    std::cin >> x;
    v.push_back(x);
  }
  for(a = 0; a < v.size(); a++){
    std::cout << v[a] + v[a+1] << '\n';
  }
  return 0;
}
