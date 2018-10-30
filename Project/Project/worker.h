/**
	@page	WorkerClass
	@brief Компонент для работы с сотрудниками

\par Использует классы:
    @ref Person
    @ref Worker
    @ref Organization
\par Содержит классы:
    @ref Worker
    @ref Organization
*/

#include "person.h"


///	Класс описания работника
/**	 Содержит данные работника и методы для работы с ними
*/
class Worker: public Person
{
protected:
    char * organization;
public:
	///	Конструктор по умолчанию
	/**	 Создает работника без инициализации полей
	*/
	Worker(void) ;

	///	Конструктор с заполнением полей класса
	/**	 Создает работника и инициализирует ее поля
	 \param fio ФИО создаваемого работника
	 \param age возраст создаваемого работника
	 \param addr адрес создаваемого работника
     \param organization Организация создаваемого рабочего
	*/
	Worker(char * fio, int age, char * addr, char * organization) : Person(fio, age, addr);

	/// Деструктор освобождает ресурсы
	~Worker(void);
};
