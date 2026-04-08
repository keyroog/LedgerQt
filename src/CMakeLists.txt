add_executable(LedgerQt
    main.cpp
    ui/main_window.cpp

    # ── Model layer (uncomment in M2) ────────────────────────
    # model/transaction.cpp
    # model/category.cpp
    # model/account.cpp

    # ── Data layer (uncomment in M2) ─────────────────────────
    # data/database_manager.cpp
    # data/transaction_repository.cpp
    # data/category_repository.cpp
    # data/account_repository.cpp

    # ── Service layer (uncomment in M5) ──────────────────────
    # services/report_service.cpp
    # services/csv_export_service.cpp

    # ── Additional UI (uncomment M3–M5) ──────────────────────
    # ui/transaction_table_model.cpp
    # ui/transaction_view.cpp
    # ui/transaction_dialog.cpp
    # ui/dashboard_widget.cpp
    # ui/category_manager_dialog.cpp
    # ui/account_manager_dialog.cpp
)

target_include_directories(LedgerQt PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(LedgerQt PRIVATE Qt6::Widgets Qt6::Sql)
