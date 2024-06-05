void vuln_function(char *str)  // Уязвимая функция
{
 if (str[0] == 'B')
  if (str[1] == 'O')
   if (str[2] == 'O')
    if (str[3] == 'M')         // Если буфер начинается с символов 'BOOM'
     raise(11);                // Выброс исключения SEGFAULT
}

int main() {
 char buf[10];        // Объявляем буфер на 10 байт
 read(0, buf, 10);    // Читаем 10 байт из стандартного потока ввода (stdin)
 vuln_function(buf);  // Передаем буфер в функцию
 return 0;
}
