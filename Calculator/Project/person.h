﻿#pragma once
/**
	@file	person.h
	@brief	Заголовочный файл класса Персоны
	@copyright	ЗАО "АБС"
	@author	Иванов И. И.
	@date	01-04-2014
	@version	2.0.1
\par Использует классы:
	@ref	Person
\par	Содержит класс:
	@ref Person
*/

///	Класс описания персоны
/**	 Содержит данные персоны и методы для работы с ними
*/

class Person
{
protected:
	char *_fio;	///<	ФИО персоны
	int _age;	///<	возраст
	char* _addr;///<	адрес в произовольном формате
public:
	///	Конструктор по умолчанию
	/**	 Создает персону без инициализации полей
	*/
	Person(void);

	///	Конструктор с заполнением полей класса
	/**	 Создает персону и инициализирует ее поля
	 \param fio ФИО создаваемой персоны
	 \param age возраст создаваемой персоны
	 \param addr адрес создаваемой персоны
	*/
	Person(char * fio, int age, char * addr);

	/// Деструктор освобождает ресурсы
	~Person(void);

	/// Возвращает полную информацию о персоне
	/**	Если сведений нет, то возвращает сообщение об ошибке
		\return  строку и данными о персоне в формате (ФИО, возраст, адрес)
		*/

	char * getFullInfo();

	/** \brief Изменяет адрес персоны

	Перед изменением проверяет формат строки с адресом ( код, город, улица, дом-корпус-номер)
	@param newAddr новый адрес персоны
	@return успешность выполнения действия */
	bool changeAddr(char *newAddr);

		/** \brief Изменяет адрес персоны

	Перед изменением проверяет формат строки с адресом ( код, город, улица, дом-корпус-номер)
	@param newAddr новый адрес персоны
	@param a парам парам пам!
	@param b бурум бурум бум!
	@return успешность выполнения действия */
	char* changeAddr2(char *newAddr, int a, bool b);
};
