#include "ui/main_window.hpp"

#include <QAction>
#include <QMenuBar>
#include <QStatusBar>
#include <QToolBar>
#include <QWidget>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
{
    setWindowTitle("LedgerQt");
    setMinimumSize(900, 600);

    setupMenuBar();
    setupToolBar();
    setupCentralWidget();
    setupStatusBar();
}

void MainWindow::setupMenuBar()
{
    // File menu
    QMenu* fileMenu = menuBar()->addMenu(tr("&File"));

    QAction* exportCsvAction = fileMenu->addAction(tr("Export CSV..."));
    exportCsvAction->setShortcut(QKeySequence("Ctrl+E"));
    exportCsvAction->setEnabled(false);  // wired in M5

    fileMenu->addSeparator();

    QAction* quitAction = fileMenu->addAction(tr("Quit"));
    quitAction->setShortcut(QKeySequence::Quit);
    connect(quitAction, &QAction::triggered, this, &QWidget::close);

    // Edit menu
    QMenu* editMenu = menuBar()->addMenu(tr("&Edit"));

    QAction* categoriesAction = editMenu->addAction(tr("Manage Categories..."));
    categoriesAction->setEnabled(false);  // wired in M4

    QAction* accountsAction = editMenu->addAction(tr("Manage Accounts..."));
    accountsAction->setEnabled(false);  // wired in M4

    // Help menu
    QMenu* helpMenu = menuBar()->addMenu(tr("&Help"));

    QAction* aboutAction = helpMenu->addAction(tr("About LedgerQt"));
    aboutAction->setEnabled(false);  // wired in M6
}

void MainWindow::setupToolBar()
{
    QToolBar* toolbar = addToolBar(tr("Main Toolbar"));
    toolbar->setMovable(false);

    QAction* addTxAction = toolbar->addAction(tr("+ Add Transaction"));
    addTxAction->setShortcut(QKeySequence("Ctrl+N"));
    addTxAction->setEnabled(false);  // wired in M3

    QAction* exportAction = toolbar->addAction(tr("Export CSV"));
    exportAction->setEnabled(false);  // wired in M5

    // Push view-toggle to the right
    QWidget* spacer = new QWidget(this);
    spacer->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    toolbar->addWidget(spacer);

    QAction* dashboardAction = toolbar->addAction(tr("Dashboard"));
    dashboardAction->setEnabled(false);  // wired in M5

    QAction* listAction = toolbar->addAction(tr("List"));
    listAction->setEnabled(false);  // wired in M3
}

void MainWindow::setupCentralWidget()
{
    // M1: plain placeholder. M3: replace with QStackedWidget.
    QWidget* placeholder = new QWidget(this);
    setCentralWidget(placeholder);
}

void MainWindow::setupStatusBar()
{
    statusBar()->showMessage(tr("Ready"));
}
