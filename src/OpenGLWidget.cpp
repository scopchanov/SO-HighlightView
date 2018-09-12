#include "OpenGLWidget.h"
#include <QDebug>
#include <QPainter>

OpenGLWidget::OpenGLWidget(QWidget *parent) :
	QOpenGLWidget(parent)
{
	setFocusPolicy(Qt::StrongFocus);
}

void OpenGLWidget::paintEvent(QPaintEvent *event)
{
	QOpenGLWidget::paintEvent(event);

	QPainter painter(this);

	painter.setPen(QPen(QBrush(Qt::magenta), 2));

	if (hasFocus())
		painter.drawRect(QRect(1, 1, width() - 2, height() - 2));
}
