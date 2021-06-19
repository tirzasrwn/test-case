#include <QCoreApplication>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream(stdout) << "Hello World from Qt5" << endl;
    exit(EXIT_SUCCESS);
    return a.exec();
}