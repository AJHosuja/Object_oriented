#include <QMainWindow>

// The following lines declare the MainWindow class in the Ui namespace,
// which is the standard namespace for the UI classes
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

// The class declaration contains the Q_OBJECT macro.
// We need it because SIGNAL/SLOT mechanism. It must come first in the class definition,
class MainWindow : public QMainWindow
{
Q_OBJECT
public:
// The following lines declare a constructor that has a default argument called parent.
// The value nullptr indicates that the widget has no parent (it is a top-level widget).
MainWindow(QWidget *parent = nullptr);
~MainWindow();
private slots:
void on_myFirstPushButton_clicked();


void on_plus_clicked();

void on_plus_2_clicked();

void on_plus_3_clicked();

void on_plus_4_clicked();

private:
// ui pointer in Ui namespace. Based on class MainWindow
Ui::MainWindow *ui;
};
