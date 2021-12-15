//
// Created by Антон Шмидт on 15.12.2021.
//

#include "solution.h"

#include <algorithm>

using namespace std;

/**
 *
 * @param s
 * @return
 *
 * Constraints
 * 1 <= s.length <= 5 * 104
 * s contains printable ASCII characters.
 * s does not contain any leading or trailing spaces.
 * There is at least one word in s.
 * All the words in s are separated by a single space.
 */
std::string Solution::reverseWords(std::string s) {
  size_t word_start_pos = 0;
  while (word_start_pos < s.length()) {
    size_t word_end_pos = s.find_first_of(' ', word_start_pos);
    if (string::npos == word_end_pos) {
      word_end_pos = s.length();
    }
    reverse(s.begin() + word_start_pos, s.begin() + word_end_pos);
    word_start_pos = word_end_pos + 1;
  }

  return s;
}
