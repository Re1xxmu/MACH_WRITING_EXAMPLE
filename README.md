# MACH_WRITING_EXAMPLE
Это Пример кода, написанного мной на этапе изучения C++, теперь программу нужно запускать из консоли, указав аргументом путь до файла
# CPP Версия
- программа понимает точки и увеличивает паузу после них;
- буффер теперь выделяется динамически
- Программа понимает превод строки в тексте и сама пререводит текст.
- критика принимается, я все еще обучаюсь и поэтому где-то могут быть оплошности.

# СSharp Версия
Файл с методом машинной печати, возможно использование в своих консольных проектах. 
метод принимает 3 значения 
- текст для вывода
- минимальный порог для генератора случайных чисел
- максимальный порог для генератора случайных чисел

тестировалось на windows 10 x64
# компиляция: 
- [clang++]: clang++ mach_write.cpp -o mach.exe(войти в консоль в папке с программой, запустить с аргументом пути до txt файла)
- [g++]: g++ mach_write.cpp -o mach.exe (действия аналогичны)

# проблемы:
  - на macos с функцией this_thread::sleep_for() выводится весь текст сразу а не по символьно.
  - безопасность cpp версии оставляет желать лучшего, пользоваться с осторожностью
  - csharp версия не подходит для unity, исправлено локально.
  - Русский язык пока что не поддерживается в CPP версии.
