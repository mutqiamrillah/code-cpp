#include <iostream>
using namespace std;
int main()
{
   float operand1,operand2,hasil;
   char operator1;

   cout << "\n\nPROGRAM KALKULATOR SEDERHANA\n";
   cout << "OPERATOR :( +, -, *, / )\n\n";
   cout<<"masukkan operand1 : ";
   cin>>operand1;
   cout<<"masukkan operator : ";
   cin>>operator1;
   cout<<"masukkan operand2 : ";
   cin>>operand2;
   if(operator1=='*')
   {hasil = operand1*operand2;
      }
    else if(operator1=='+')
    {hasil = operand1+operand2;
      }
    else if(operator1=='-')
    {hasil = operand1-operand2;
      }
    else if (operator1=='/')
    {hasil = operand1/operand2;
      }

      cout<<"Hasil = "<<hasil <<endl;
   return 0;
}
