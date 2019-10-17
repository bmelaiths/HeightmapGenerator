#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HeightMapGenerator.h"

class HeightMapGenerator : public QMainWindow
{
	Q_OBJECT

public:
	HeightMapGenerator(QWidget *parent = Q_NULLPTR);

private:
	Ui::HeightMapGeneratorClass ui;
};
