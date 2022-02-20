#include <bits/stdc++.h>
#include "Memory.cpp"

using namespace std;

int main()
{

    Memory memori;

    memori.setIdProduct("00001");
    memori.setPrice(2000000);
    memori.setBrand("ASES");
    memori.setModel("Memory");
    memori.setMemorySize(1000);
    memori.setFrequency(1000);
    memori.setSupportCuda(true);

    cout << "================================\n";
    cout << "DATA MEMORI : \n";
    cout << "================================\n";
    cout << "- Id Product   : " << memori.getIdProduct() << "\n";
    cout << "- Price        : Rp." << memori.getPrice() << "\n";
    cout << "- Brand        : " << memori.getBrand() << "\n";
    cout << "- Model        : " << memori.getModel() << "\n";
    cout << "- Memory Size  : " << memori.getMemorySize() << "\n";
    cout << "- Frequency  : " << memori.getFrequency() << "\n";
    cout << "- Support Cuda : ";
    if (memori.getSupportCuda())
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    cout << "================================\n";

    return 0;
}
