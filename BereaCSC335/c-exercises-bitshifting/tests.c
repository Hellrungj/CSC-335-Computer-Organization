#include <stdio.h>
#include <stdlib.h>

#include "tests.h"
#include "bitlib.h"

/* BEGIN NO STUDENT COMMENTS */
int tests_run = 0;
/* END NO STUDENT COMMENTS */

static char * test_shift_left_one() {
 mu_assert("SLO 1", shift_left_one(0x0001) == 0x0002); 
 mu_assert("SLO 2", shift_left_one(0x0003) == 0x0006); 
 mu_assert("SLO 3", shift_left_one(0x0002) == 0x0004); 
 mu_assert("SLO 4", shift_left_one(0x0008) == 0x0010);
 mu_assert("SLO 5", shift_left_one(0x0080) == 0x0100);
 return 0;
}


static char * test_shift_left() {
 mu_assert("SL 1", shift_left(0x0001, 1) == 0x0002);
 mu_assert("SL 2", shift_left(0x0003, 2) == 0x000B);
 mu_assert("SL 3", shift_left(0x0002, 2) == 0x0008);
 mu_assert("SL 4", shift_left(0x0008, 8) == 0x0080);
 mu_assert("SL 5", shift_left(0x0080, 8) == 0x0000);
 return 0;
}

static char * test_shift() {
 mu_assert("S 1", shift(0x0001, 1, left)  == 0x0002);
 mu_assert("S 2", shift(0x0003, 2, left)  == 0x000B);
 mu_assert("S 3", shift(0x0002, 2, left)  == 0x0008);
 mu_assert("S 4", shift(0x0008, 8, left)  == 0x0080);
 mu_assert("S 5", shift(0x0080, 8, left)  == 0x0000);
 mu_assert("S 6", shift(0x0080, 8, right) == 0x0001);
 mu_assert("S 7", shift(0x0002, 1, right) == 0x0001);
 mu_assert("S 8", shift(0x0004, 1, right) == 0x0002);
 return 0;
}

static char * test_zero_lower() {
 mu_assert("ZL 1", zero_lower(0x0001)  == 0x0000);
 mu_assert("ZL 2", zero_lower(0x00FF)  == 0x0000);
 mu_assert("ZL 3", zero_lower(0xFFFF)  == 0xFF00);
 mu_assert("ZL 3", zero_lower(0xFF00)  == 0xFF00);
}

static char * test_zero_upper() {
 mu_assert("ZU 1", zero_upper(0x0001)  == 0x0001);
 mu_assert("ZU 2", zero_upper(0x00FF)  == 0x00FF);
 mu_assert("ZU 3", zero_upper(0xFFFF)  == 0x00FF);
}

static char * test_zero() {
 mu_assert("Z 1", zero(0x0001, lower)  == 0x0000);
 mu_assert("Z 2", zero(0x00FF, lower)  == 0x0000);
 mu_assert("Z 3", zero(0xFFFF, lower)  == 0xFF00);
 mu_assert("Z 4", zero(0xFF00, lower)  == 0xFF00);
 mu_assert("Z 5", zero(0x0001, upper)  == 0x0001);
 mu_assert("Z 6", zero(0x00FF, upper)  == 0x00FF);
 mu_assert("Z 7", zero(0xFFFF, upper)  == 0x00FF);
}

static char * all_tests() {
 mu_run_test(test_shift_left_one);
 mu_run_test(test_shift_left);
 mu_run_test(test_shift);
 mu_run_test(test_zero_lower);
 mu_run_test(test_zero_upper);
 mu_run_test(test_zero);
 return 0;
}

/* Standard main() for running all tests. */
int main(int argc, char **argv) {
 char *result = all_tests();
 if (result != 0) {
     printf("%s\n", result);
 }
 else {
     printf("ALL TESTS PASSED\n");
 }
 printf("Tests run: %d\n", tests_run);

 return result != 0;
}

