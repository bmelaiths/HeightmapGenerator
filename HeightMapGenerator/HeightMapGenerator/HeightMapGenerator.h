#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HeightMapGenerator.h"

class HeightMapGenerator : public QMainWindow
{
	Q_OBJECT

public:
	HeightMapGenerator(QWidget *parent = Q_NULLPTR);
public slots:
	void on_widthSpinBox_valueChanged(int);
	void on_heightSpinBox_valueChanged(int);

private:
	void onMapSizeChange();
	Ui::HeightMapGeneratorClass ui;
};
