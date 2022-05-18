#pragma once

class USBConnection{
    private:
        int _ID;
    public:
        USBConnection(){
            ID = count++;
        }
        static int count;
        int get_ID(){
            return _ID;
        }
        ~USBConnection(){}
};

int USBConnection :: count = 1;
