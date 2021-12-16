#include "easy_list.h"
void itc_rshift_list(vector <int> &mass) {
  if (mass.size() != 0) {
        int rsh = mass[mass.size() - 1];
        for (int i = mass.size() - 1; i > 0; i--) mass[i] = mass[i - 1];
        mass[0] = rsh;}}

