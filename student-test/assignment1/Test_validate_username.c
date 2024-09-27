#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"

/**
* This function validates that the username from the config file and the hardcoded username match.
*/
void test_validate_my_username()
{
    // Step 1: Call my_username() to get the hardcoded username
    const char* hardcoded_username = my_username();

    // Step 2: Call malloc_username_from_conf_file() to get the username from the config file
    char* config_username = malloc_username_from_conf_file();

    // Step 3: Use TEST_ASSERT_EQUAL_STRING_MESSAGE to compare the two usernames
    TEST_ASSERT_EQUAL_STRING_MESSAGE(hardcoded_username, config_username, "Usernames do not match!");

    // Free the allocated memory for config_username
    free(config_username);
}

