#include "easy_list.h"
void itc_rev_list(vector <int> &mass) {
    if (mass.size() != 0){
        int rev;
        for (int i = 0; i < mass.size() / 2; i++){
            rev = mass[i];
            mass[i] = mass[mass.size() - i - 1];
            mass[mass.size() - i - 1] = rev;}}}
