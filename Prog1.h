namespace Prog1 {
	//список строки
	struct Item {
		double num; //number
		int Y; //row nomber
		int X; //column nomber
		struct Item* next; //next Item
	};
	//список строк
	struct Row {
		int i; //индекс строки
		Item* head; //указатель на голову списка строки
		struct Row* next; //следующая строка
	};
	
	// шаблон функций ввода одного значения
	template <class T>
	int getNum(T &a);
	Row* input_Row(Row* r, Row* head);
	Item* input_Item(Item* head, Item* I);

	void print_0(int);

		// прототипы функций
	Row* input(Row*, int*, int*); // ввод матрицы
	Row* find_Row(int i, Row* head);
	void output(const char* msg, Row* head, int*, int*); // вывод матрицы
	void erase(Row*); // освобождение занятой памяти
	void result(Row*); // вычисление главного результата
	double SUM(Item*); // вычисление суммы ряда
}
