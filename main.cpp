#include "Appliances.h"
#include "Device.h"
#include "Roomba.h"

int main()
{
    system("chcp 1251");
    
    IElectronics* unit[7];

    unit[0] = new Washer(80, 10);
    unit[1] = new Fridge(100, 2.0);
    unit[2] = new Microwave(10, 800);
    unit[3] = new Phone(16, "Type-C");
    unit[4] = new Powerbank(36, 5);
    unit[5] = new Laptop(12, 1080, 1080);
    unit[6] = new Roomba(24, 12);

    bool open = true;
    while (open)
    {
        cout << "\n\nВыберите товар: \n1 - Стиральная машинка\n2 - Холодильник\n3 - Микроволновка\n4 - Телефон\n5 - Повербанк\n6 - Ноутбук\n7 - Робот-пылесос\n\n0 - Выход\n " << endl;
        int choice;
        cin >> choice; 
        switch (choice)
        {
        case 1:
            unit[0]->ShowSpec();
            break;

        case 2:
            unit[1]->ShowSpec();
            break;

        case 3:
            unit[2]->ShowSpec();
            break;

        case 4:
            unit[3]->ShowSpec();
            break;

        case 5:
            unit[4]->ShowSpec();
            break;
        case 6:
            unit[5]->ShowSpec();
            break;
        case 7:
            unit[6]->ShowSpec();
            break;
        case 0:
            open = false;
            break;

        default:
            cout << "Выберите товар от 1 до 6 или 0, чтобы выйти" << endl;
            break;
        }
    }

    delete unit[0];
    delete unit[1];
    delete unit[2];
    delete unit[3];
    delete unit[4];
    delete unit[5];
    delete unit[6];

    return 0;
}