/******** DO NOT EDIT THIS FILE ********/
#ifndef _TEST_PROC_H
#define _TEST_PROC_H
#define MUNIT_ENABLE_ASSERT_ALIASES
#include "munit/munit.h"

MunitResult test_proc_new(const MunitParameter params[],
    void* fixture);
MunitResult test_proc_new_null(const MunitParameter params[],
    void* fixture);
    
static MunitTest tests[] = {
    { "/test_proc_new", test_proc_new, NULL, NULL,
        MUNIT_TEST_OPTION_NONE, NULL },
    { "/test_proc_new_null", test_proc_new_null, NULL, NULL,
        MUNIT_TEST_OPTION_NONE, NULL },
    { NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
};

const MunitSuite suite = {
    "/test_util", tests, NULL, 1, MUNIT_SUITE_OPTION_NONE 
};    


#endif