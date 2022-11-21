// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <algorithm>
using std::min;

int read4(char *buf4);
/* Self-compile part end */

class Solution {
 public:
  /**
   * @param buf Destination buffer
   * @param n   Number of characters to read
   * @return    The number of actual characters read
   */
  int read(char *buf, int n) {
    int n_read = 4;
    int n_bufed = 0;
    int n_left = n;
    while (n_left >= 4 && n_read == 4) {
      n_read = read4(buf + n_bufed);
      n_bufed += n_read;
      n_left -= n_read;
    }
    if (n_read == 4) {
      if (n_left > 0) {
        char buf4[4];
        n_read = read4(buf4);
        for (int i = 0; i < min(n_left, n_read); ++i) {
          buf[n_bufed] = buf4[i];
          ++n_bufed;
        }
      }
    }
    return n_bufed;
  }
};
