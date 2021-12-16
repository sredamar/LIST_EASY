#include "easy_list.h"
void itc_rev_par_list(vector <int> &mass) {
    if (mass.size() != 0) {
    int rp;
        for (int i = 1; i < mass.size() - 1; i += 2) {
            rp = mass[i];
            mass[i] = mass[i + 1];
            mass[i + 1] = rp;}}}
