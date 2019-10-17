#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HeightMapGenerator.h"

class HeightMapGenerator : public QMainWindow
{
	Q_OBJECT

public:
	HeightMapGenerator(QWidget *parent = Q_NULLPTR);
public slots:
	void on_spinBox_valueChanged(int);
	void on_spinBox_2_valueChanged(int);

private:
	Ui::HeightMapGeneratorClass ui;
};
