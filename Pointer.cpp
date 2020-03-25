#include "Pointer.h"

#include <QKeyEvent>
#include <QMouseEvent>

Pointer::Pointer() {
  setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
  setPixmap(QPixmap(":/pointer.png"));
  setStyleSheet("background: transparent;");
  setAttribute(Qt::WA_TranslucentBackground);
  // setMouseTracking(true); // mouse events generated even without button press
}

void Pointer::mouseMoveEvent(QMouseEvent *) {
  move(QCursor::pos() - QPoint(32,32));
}

void Pointer::keyPressEvent(QKeyEvent *e) {
  if (e->modifiers() == Qt::NoModifier && e->key() == Qt::Key_Q)
    close();
  QLabel::keyPressEvent(e);
}
