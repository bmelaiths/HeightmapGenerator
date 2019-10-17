#include "HeightMapGenerator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	HeightMapGenerator w;
	w.show();
	return a.exec();
}
