#ifndef OPENGLWIDGET_H
#define OPENGLWIDGET_H

#include <QOpenGLWidget>

class OpenGLWidget : public QOpenGLWidget
{
	Q_OBJECT
public:
	explicit OpenGLWidget(QWidget *parent = nullptr);

protected:
	void paintEvent(QPaintEvent *event) override;
};

#endif // OPENGLWIDGET_H
