# **Реализация класса контейнера, реализующего структуру библиотеки**

## **Как установить & пользоваться**
    Подробная инструкция описана в [этом файле](INSTALLATION.md)
  
## **Задача, которая решалась в проекте**
    
  
## **Идея решения**
    Проектирование класса библиотеки разделилось на подзадачи:
    - Author - класс, реализующий структуру Автора (дата рождения и имя)
    - Book - класс, реализующий структуру Книги (даты написания, кода isbn, названия, названия издательства, автора)
    - Library - класс, реализубющий структуру Библиотеки (вектор **(массив)** книг и методы для работы с ним)
  
## **Нюансы**
    - [header.h](FigureProject/header.h) - (***ВАЖНО ПОМНИТЬ***) заголовочный файл, в котором
    подключаются все библиотеки, объявляются константы и используется `using` в качестве современной замены `typedef`.
    - [author.h](library/author.h) - заголовочный файл, в котором объявлен класс и его методы, представляющий структуру Автора
    - [author.cpp](library/author.cpp) - компилируемый файл, в котором реализован методы класса `author.h`, объявленные в заголовочном файле
    - [book.h](library/book.h) - заголовочный файл, в котором объявлен класс и его методы, представляющий структуру Книги
    - [book.cpp](library/book.cpp) - компилируемый файл, в котором реализован методы класса `book.h`, объявленные в заголовочном файле
    - [library.h](library/library.h) - заголовочный файл, в котором объявлен класс и его методы, представляющий структуру Библиотеки
    - [library.cpp](library/library.cpp) - компилируемый файл, в котором реализован методы класса `library.h`, объявленные в заголовочном файле
    - Некоторые методы класса `Library` могут выбрасывать ошибки(`throw exception("error message")`). Это происходит в нелогичных случаях.
    _Например: попытка вставки новой книги по индексу, невходящему в индекс массива книг_
    - Классы `Author`, `Book` и `Library` независимы от других файлов. Таким образом, задача создания 
    классов заканчивается на создании их заголовочных и компилируемых файлов. Меню с проверкой всех методов, в свою очередь,
    находится в основном файле - [main.cpp](library/main.cpp)
    - блок, представленный ниже нужен для отлавливания ошибок, которые выбрасывают методы класса `ForwardList`

    ```c++
    try {
     // код
    } catch (const exception& ex) {
     // код
    }
    ```
    - В задаче присутсвует использование `tuple<тип,тип,тип>` . Берётся этот `tuple` из стандартной библиотеки `<tuple>`. Эти тюплы позволяют
  создавать набор из N разно-типных _(или одинаковых)_ данных (кортеж). Так, мы можем хранить 3 `int'a` и 2 `double'a` :
    ```c++ 
      tuple<int,int,int,double,double>
    ``` 
    или же, как они и используются, хранить с помощью них дату рождения `tuple<size_t,size_t,size_t>` и фио `tuple<string,string,string>`
    - Для получения данных из `tuple'a` нужно пользоваться методом `get` :
    ```c++
      get<позиция>(наш тюпл)
    ```

## **Автор**
  **Глеб Первеев** - [Sanlovty](https://github.com/Sanlovty)

## **Лицензия**

Этот проект находится под лицензией Apache License 2.0 - подробности см. в файле [LICENSE](LICENSE)
