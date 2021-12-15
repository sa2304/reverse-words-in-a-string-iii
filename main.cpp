#include <cassert>
#include <iostream>

#include "solution.h"

using namespace std;

void TestReverseWords() {
  Solution s;
  assert("s'teL ekat edoCteeL tsetnoc"s == s.reverseWords("Let's take LeetCode contest"s));
  assert("doG gniD"s == s.reverseWords("God Ding"s));
}

int main() {
  std::cout << "Ok!" << std::endl;
  return 0;
}
