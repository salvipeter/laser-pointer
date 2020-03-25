#include <QtWidgets/QApplication>

#include "Pointer.h"

int main(int argc, char **argv) {
  QApplication app(argc, argv);
  Pointer window;
  window.show();
  return app.exec();
}
