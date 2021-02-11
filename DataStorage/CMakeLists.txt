# CMakeList.txt: проект CMake для DataStorage; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (DataStorage "DataStorage.cpp"  "IDataStorage.h" "Floppy.h" "HDD.h" "SSD.h" "DVD.h" "CD.h"  "MD.h" "Flach.h" "CLI.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
