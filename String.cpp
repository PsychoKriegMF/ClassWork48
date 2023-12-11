#include <iostream>
#include <string>  //библиотека, содержащая в себе функции и методы класса std::string



int main() {
	system("chcp 1251>null");
	
	//system("cls"); //clear
	int n;


	//Строки C  - упорядоченный набор символьных элементов, объединенных в массив, 
	// в конце которого распологается ноль-терминатор
	
	char cstr[6]{'H', 'e', 'l', 'l', 'o', '\0'};
	for (int i = 0; i < 5; i++)
		std::cout << cstr[i];
	std::cout << std::endl;

	std::cout << cstr << std::endl;

	char cstr2[] = "Hello World!";
	std::cout << cstr2 << std::endl;
	

	//Строки С++ - 
	// Конструктор класса - это функция, вызываемая в момент создания объекта класса
	
	std::string mystr; // Это пустая строка("")
	mystr = "Hi World!";
	std::cout << mystr << std::endl;

	//Конкатенация строк - процесс слияния двух или более строк в одну новую


	std::string mystr1 = "Green", mystr2 = "apple";
	std::string mystr3 = mystr1 + ' ' + mystr2 + '!';
	std::cout << mystr3 << std::endl;

	mystr2 += "...";
	std::cout << mystr2 << std::endl;
	

	//Ввод строки 
	
	std::string name;
	std::cout << "Как вас зовут? Ввод -> ";
	//std::cin >> name;  // Проблема: ввод однго лишь слова
	std::getline(std::cin, name);
	std::cout << "Привет, " << name << "!\n";

	std::cout << "Сколько вам лет? Ввод -> ";
	int age;
	std::cin >> age;
	std::cout << "когда то и мне было " << age << "...\n";

	std::cin.ignore(); // чтобы небыло ошибки вставляется между cin & getline
	//для очистки потока ввода

	std::cout << "А кем ты работаеш? Ввод -> ";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "Всегда хотел стать " << job << "!\n";


	

	//МЕТОДЫ СТРОК

	//Метод - специальная функция  

	
	std::string str = "Hello World!";


	//Методы size и length, возвращающие длину строки
	//std::cout << str.size() << std::endl; // 12
	//std::cout << str.length() << std::endl; // 12

	//Метод insert, вставляющий подстроку в строку
	//str.insert(3, "WWW");
	//std::cout << str << std::endl; // HelWWWlo World!

	//Метод replace, заменяющий часть строки на новую
	//str.replace(3, 5, "!!!");
	//std::cout << str << std::endl; // Hel!!!rld!

	//Метод find и rfind, реализующий линейный поиск внутри строки
	//std::cout << str.find('l') << std::endl; // 2
	//std::cout << str.find('l', 5) << std::endl; // 9
	//std::cout << str.rfind('o') << std::endl; // 7
	//std::cout << str.rfind('o',5) << std::endl; // 4


	//Метод substr, извлекающий подстроку из строки

	//std::cout << str.substr(4) << std::endl; // o World!
	//std::cout << str.substr(3, 6) << std::endl; // lo Wor
	

	std::cout << "Enter number -> ";
	std::cin >> n;
	std::string num_str = std::to_string(n);
	bool f = true;
	for (int i = 0; i < num_str.length() / 2; i++)
		if (num_str[i] != num_str[num_str.length() - i - 1])
			f = false;
	if (f)
		std::cout << "Palindrome\n\n";
	else
		std::cout << "No polindrome\n\n";


	// Изменение регистра строки

	std::string s1 = "HELLO World!";
	for (int i = 0; i < s1.length(); i++)
		s1[i] = std::tolower(s1[i]);
	std::cout << s1 << std::endl;


	std::string s2 = "HELLO World!";
	for (int i = 0; i < s1.length(); i++)
		s2[i] = std::toupper(s1[i]);
	std::cout << s2 << std::endl;



	return 0;
}