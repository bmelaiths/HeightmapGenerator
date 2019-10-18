#include "HeightMapGenerator.h"
#include <qpixmap.h>

HeightMapGenerator::HeightMapGenerator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	onMapSizeChange();


}

void HeightMapGenerator::on_heightSpinBox_valueChanged(int)
{
	onMapSizeChange();
}

void HeightMapGenerator::on_widthSpinBox_valueChanged(int)
{
	onMapSizeChange();
}

void HeightMapGenerator::onMapSizeChange()
{
	QPixmap* pmap = new QPixmap(ui.widthSpinBox->value(), ui.heightSpinBox->value());
	ui.canvas->setPixmap(*pmap);
	ui.centralWidget->adjustSize();
	adjustSize();
	delete pmap;
}
