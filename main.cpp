//#include <stdio.h>
//#include <string.h>
#include <iostream>
#include <cstring>
#include <locale>
#include <unistd.h>
//#include <windows.h>
//#include <time.h>
//#include <locale.h>


using namespace std;

static unsigned char signHeader[] = "QScalp History Data";
//3.1. Заголовок файла
//Тип		Описание
//byte[]	сигнатура файла = «QScalp History Data» (только символы UTF8, без нуля в конце)
//byte		мажорная версия формата файла = 4
//String	имя приложения, с помощью которого записан данный файл
//String	произвольный пользовательский комментарий
//DateTime	дата и время начала записи файла (UTC)
//byte		количество информационных потоков в файле
//
// CONNECTOR:TICKER:AUXCODE:NUMCODE:STEP
// CONNECTOR – идентификатор коннектора/подключения, через который выполняется получение данных по инструменту;
// TICKER – основной код инструмента (например, RIU3);
// AUXCODE – вспомогательный код инструмента (например, SPBFUT, CME), в некоторых случаях отсутствует;
// NUMCODE – цифровой код инструмента, в некоторых случаях отсутствует;
// STEP – минимальный шаг цены инструмента.
//
//3.2. Заголовок потока
//Тип		Описание
//byte		идентификатор потока:
//				Quotes = 0x10
//				Deals = 0x20
//				OwnOrders = 0x30
//				OwnTrades = 0x40
//				Messages = 0x50
//				AuxInfo = 0x60
//				OrdLog = 0x70
//String	полный код инструмента, которому соответствует поток; для потока «Messages» отсутствует
//

int main(int argc, char* argv[]) {
    int opt;
    char op;
    const char *opts = "d:n:f:";
    string dateTrade, nearTicker, farTicker;

    while ((opt = getopt(argc, argv, opts)) != -1) 
    {
        switch (opt)
		{
    	    case 'd':
                dateTrade = optarg;
                break;
    	    case 'n':
                nearTicker = optarg;
                break;
    	    case 'f':
                farTicker = optarg;
                break;
    	    default:
                cout << "Ошибочная опция!\n";
				cout << "-d Дата торгов\n";
				cout << "-n Ближний_фьючерс\n";
				cout << "-f Дальний_фьючерс\n";
        }
    }

    setlocale(LC_ALL,"");
    
    cout << "Дата торгов: " << dateTrade << " Ближний фьючерс: " << nearTicker << " Дальний фьючерс: " << farTicker << endl;

	//unsigned char buffer[MAX_PATH];
	int PortNum;
	uint32_t timeout = 60000;
	int argn = 1;
	//strcpy((char*)buffer, "");
/*	
	result = 0;
	shift = 0;
	while (true) {
		byte = next byte in input;
		result |= (low-order 7 bits    
		ofbyte)<<shift;
		if(high-orderbit  ofbyte == 0)
			break;
		shift += 7;
	}
*/
    return 0;
}