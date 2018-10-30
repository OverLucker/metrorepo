#include "worker.h"


/**
    @file       worker.cpp
    @brief      Файл исходных кодов класса Worker
    @copyright  ЗАО "АБС"
    @author     Иванов И.И.
    @date	01-04-2014
    @version	2.0.1
\par Использует файл:
    @ref person.h
\par Содержит класс:
    @ref Person
*/

Worker::Worker(void)
{

}

Worker::Worker(char * fio, int age, char * addr, char * organization) : Person(fio, age, addr)
{
    this->organization = organization;
}
