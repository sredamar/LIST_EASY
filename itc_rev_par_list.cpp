#include "easy_list.h"
void itc_rev_par_list(vector <int> &mass){
    if (mass.size() > 0){
    int rev = 0;
    for (int i = 1 ; i < mass.size(); i += 2){
        rev = mass[i];
        mass[i] = mass[i - 1];
        mass[i - 1] = rev;}
    }
}
