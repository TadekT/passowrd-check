add_test( ABAABA.DUPAUDAP /home/ted/Desktop/vs/password-check/build/validation [==[--gtest_filter=ABAABA.DUPAUDAP]==] --gtest_also_run_disabled_tests)
set_tests_properties( ABAABA.DUPAUDAP PROPERTIES WORKING_DIRECTORY /home/ted/Desktop/vs/password-check/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( getErrorMessage.CheckingErrorFunction /home/ted/Desktop/vs/password-check/build/validation [==[--gtest_filter=getErrorMessage.CheckingErrorFunction]==] --gtest_also_run_disabled_tests)
set_tests_properties( getErrorMessage.CheckingErrorFunction PROPERTIES WORKING_DIRECTORY /home/ted/Desktop/vs/password-check/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( validation_TESTS ABAABA.DUPAUDAP getErrorMessage.CheckingErrorFunction)