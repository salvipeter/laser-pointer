# -*- mode: Makefile -*-

TARGET = laser-pointer
CONFIG *= c++14 qt opengl debug
QT += gui widgets opengl xml

HEADERS = Pointer.h
SOURCES = Pointer.cpp main.cpp

RESOURCES = laser-pointer.qrc
