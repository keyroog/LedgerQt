# M1 placeholder. GoogleTest wired in M2.
enable_testing()

# ── Uncomment in M2 ────────────────────────────────────────────────────────────
# include(FetchContent)
# FetchContent_Declare(googletest
#     GIT_REPOSITORY https://github.com/google/googletest.git
#     GIT_TAG        v1.14.0
# )
# FetchContent_MakeAvailable(googletest)
#
# add_executable(LedgerQt_tests
#     test_transaction.cpp
#     test_transaction_repository.cpp
#     test_category_repository.cpp
#     test_account_repository.cpp
#     test_report_service.cpp
#     test_csv_export_service.cpp
#     ../src/model/transaction.cpp
#     ../src/model/category.cpp
#     ../src/model/account.cpp
#     ../src/data/database_manager.cpp
#     ../src/data/transaction_repository.cpp
#     ../src/data/category_repository.cpp
#     ../src/data/account_repository.cpp
#     ../src/services/report_service.cpp
#     ../src/services/csv_export_service.cpp
# )
#
# target_include_directories(LedgerQt_tests PRIVATE ../src)
# target_link_libraries(LedgerQt_tests PRIVATE Qt6::Sql GTest::gtest_main)
#
# include(GoogleTest)
# gtest_discover_tests(LedgerQt_tests)
