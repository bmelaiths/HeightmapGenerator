#include "HeightMapGenerator.h"
#include <qpixmap.h>

HeightMapGenerator::HeightMapGenerator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QPixmap* pmap = new QPixmap(ui.spinBox->value(), ui.spinBox_2->value());
	ui.label_3->setPixmap(*pmap);
	delete pmap;


}

void HeightMapGenerator::on_spinBox_2_valueChanged(int)
{
	QPixmap* pmap = new QPixmap(ui.spinBox->value(), ui.spinBox_2->value());
	ui.label_3->setPixmap(*pmap);
	delete pmap;
}

void HeightMapGenerator::on_spinBox_valueChanged(int)
{
	QPixmap* pmap = new QPixmap(ui.spinBox->value(), ui.spinBox_2->value());
	ui.label_3->setPixmap(*pmap);
	ui.centralWidget->adjustSize();
	adjustSize();
	delete pmap;
}
