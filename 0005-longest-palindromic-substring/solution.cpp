            left = i;
            }

                left--;
                right++;
                }
            right = i + 1;

            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }

            //even len
                left--;
                right++;
            }

         }

        return s.substr(start, maxLen);

    }
