// -*- mode: c++ -*-
#pragma once

#include <QLabel>

class Pointer : public QLabel {
  Q_OBJECT

public:
  Pointer();
  void mouseMoveEvent(QMouseEvent *e);
  void keyPressEvent(QKeyEvent *e);
};
