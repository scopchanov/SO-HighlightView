#include "MainWindow.h"
#include "OpenGLWidget.h"
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent)
{
	auto *widget = new QWidget(this);
	auto *viewTopLeft = new OpenGLWidget(this);
	auto *viewTopRight = new OpenGLWidget(this);
	auto *viewBottomLeft = new OpenGLWidget(this);
	auto *viewBottomRight = new OpenGLWidget(this);
	auto *layoutMain = new QGridLayout(widget);

	viewTopLeft->setFocusPolicy(Qt::StrongFocus);
	viewTopLeft->setStyleSheet("border: 3px solid green;");

	layoutMain->addWidget(viewTopLeft, 0, 0);
	layoutMain->addWidget(viewTopRight, 0, 1);
	layoutMain->addWidget(viewBottomLeft, 1, 0);
	layoutMain->addWidget(viewBottomRight, 1, 1);

	setCentralWidget(widget);
	resize(640, 480);
}
