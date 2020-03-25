// -*- mode: c++ -*-
#pragma once

#include <QLabel>

class Pointer : public QLabel {
  Q_OBJECT

public:
  Pointer();
  void keyPressEvent(QKeyEvent *e);
};
