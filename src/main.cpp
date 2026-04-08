#include <QApplication>

#include "ui/main_window.hpp"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    app.setApplicationName("LedgerQt");
    app.setApplicationVersion("0.1.0");
    app.setOrganizationName("LedgerQt");

    MainWindow window;
    window.show();

    return app.exec();
}
