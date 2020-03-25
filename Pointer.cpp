#include "Pointer.h"

#include <QKeyEvent>

Pointer::Pointer() {
  setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
  setPixmap(QPixmap(":/pointer.png"));
  setStyleSheet("background: transparent;");
  setAttribute(Qt::WA_TranslucentBackground);
}

void Pointer::keyPressEvent(QKeyEvent *e) {
  if (e->modifiers() == Qt::NoModifier && e->key() == Qt::Key_Q)
    close();
  QLabel::keyPressEvent(e);
}
